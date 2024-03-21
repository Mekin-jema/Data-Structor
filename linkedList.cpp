
#include <iostream>
using namespace std;
#ifndef FloatList_H
#define FloatList_H
#endif
template <class T>
class FloatList
{
    private:	// De clare a structure for the list
    struct ListNode	
    {
        T value;		
        struct ListNode *next;	
        
    }; 	
    ListNode *head;	// List head pointer
    public:	
    FloatList(void)	// Constructor
    { 
        head = NULL; 
        
    }	
    ~FloatList(void); // Destructor
    void appendNode(T);	
    void insertNode(T);	
    void deleteNode(T);	
    void displayList(void);
    
};
template <class T>
void FloatList<T>::appendNode(T num)
{	
    ListNode *newNode, *nodePtr; // Allocate a new node & store num
    newNode = new ListNode;	
    newNode->value = num;	
    newNode->next = NULL; // If there are no nodes in the list
    // make newNode the first node
    if (!head)		
    head = newNode;	
    else	// Otherwise, insert newNode at end
    {		// Initialize nodePtr to head of list
    nodePtr = head;		// Find the last node in the list
    while (nodePtr->next)			
       nodePtr = nodePtr->next;		
    // Insert newNode as the last node
    nodePtr->next = newNode;
    }
}
template <class T>
FloatList<T>::~FloatList(void)
{
    ListNode *nodePtr, *nextNode;
    nodePtr = head;
    while (nodePtr != NULL)
    {
        nextNode = nodePtr->next;
        delete nodePtr;		
        nodePtr = nextNode;	
        
    }
}
template <class T>
void FloatList<T>::displayList(void)
{
    ListNode *nodePtr;
    nodePtr = head;	
    while (nodePtr)
    {
        cout<<nodePtr->value<<endl;		
        nodePtr = nodePtr->next;
    }
}
template <class T>
void FloatList<T>::insertNode(T num)
{
    ListNode *newNode, *nodePtr, *previousNode;
    // Allocate a new node & store Num
    newNode = new ListNode;
    newNode->value = num;
    // If there are no nodes in the list
    // make newNode the first node
    if (!head)
    {
        head = newNode;
        newNode->next = NULL;
    }
    else	// Otherwise, insert newNode.
    {
	  // Initialize nodePtr to head of list
      nodePtr = head;
      // Skip all nodes whose value member is less
	  // than num.
    while (nodePtr != NULL && nodePtr->value < num)
    {	
        previousNode = nodePtr;
        nodePtr = nodePtr->next;
    }
     // If the new mode is to be the 1st in the list,
     // insert it before all other nodes.
    if (previousNode == NULL)
	{
	    head = newNode;
	    newNode->next = nodePtr;
	}
	else
	{
	    previousNode->next = newNode;
	    newNode->next = nodePtr;
	}
	}
}
template <class T>
void FloatList<T>::deleteNode(T num)
{
    ListNode *nodePtr, *previousNode;
    // If the list is empty, do nothing.
    if (!head)
       return;
       // Determine if the first node is the one.
    if (head->value == num)
    {
        nodePtr = head->next;
        delete head;
        head = nodePtr;
    }
    else
    {
        // Initialize nodePtr to head of list	
        nodePtr = head;
        // Skip all nodes whose value member is
		// not equal to num	
        while (nodePtr != NULL && nodePtr->value != num)
        {	
            previousNode = nodePtr;
            nodePtr = nodePtr->next;
        }
        // Link the previous node to the node after
		// nodePtr, then delete nodePtr.
        previousNode->next = nodePtr->next;
        delete nodePtr;
        }
} 


// #include <iostream>
// #include "FloatList.h"
// using namespace std;
int main(void){
    // Your code here!
    FloatList<float> list;
    list.appendNode(2.5);
    list.appendNode(7.9);
    list.appendNode(12.6);
    list.insertNode(10.5);
    cout << "Here are the initial values:\n";
    list.displayList();
    cout << endl;
    cout << "Now after deleting the node in the middle.\n";
    list.deleteNode(7.9);
    list.displayList();
    cout << endl;
    cout << "Now deleting the last node.\n";	
    cout << "Here are the nodes left.\n";	
    list.deleteNode(12.6);
    list.displayList();
    cout << endl;
    cout << "Now deleting the only remaining node.\n";
    cout << "Here are the nodes left.\n";
    list.deleteNode(2.5);
    list.displayList();
}







