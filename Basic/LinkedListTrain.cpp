
#include <iostream>
using namespace std;
#ifndef LinkedList_H
#define LinkedList_H
#endif
template <class T>
class LinkedList
{
    private:	// De clare a structure for the list
    struct ListNode	
    {
        T data;		
        ListNode *next;	
        
    }; 	
    ListNode *head;	// List head pointer
    public:	
    LinkedList(void)	// Constructor
    { 
        head = NULL; 
        
    }	
    ~LinkedList(void); // Destructor
    void appendNode(T);	
    void insertNode(T);	
    void deleteNode(T);	
    void displayList(void);
    void sortTheList(void);
    void makeUniqueList(void);
    
};
template <class T>
void LinkedList<T>::appendNode(T data)
{	
    ListNode *newNode, *nodePtr; // Allocate a new node & store num
    newNode = new ListNode;	
    newNode->data= data;	
    newNode->next = NULL; // If there are no nodes in the list
    // make newNode the first node
    if (!head)		
    head = newNode;	
    else	// Otherwise, insert newNode at end
    {		// Initialize nodePtr to head of list
    nodePtr = head;		// Find the last node in the list
    while (nodePtr->next!=NULL)			
       nodePtr = nodePtr->next;		
    // Insert newNode as the last node
    nodePtr->next = newNode;
    }
}
template <class T>
LinkedList<T>::~LinkedList(void){
    ListNode *nodePtr,*nextNode;
    nodePtr=head;
    while(!nodePtr ){
        nextNode=nodePtr->next;
        delete nodePtr;
        nodePtr=nextNode;
    }
}
template <class T>
void LinkedList<T>::displayList(void){
  ListNode *nodePtr;
  nodePtr=head;
  while(nodePtr !=NULL){
    cout<<nodePtr->data<<" ";
    nodePtr=nodePtr->next;

  }
}

template <class T>
void LinkedList<T>::insertNode(T data){
    ListNode *newNode;
    newNode=new ListNode;
    newNode->next=NULL;
    newNode->data=data;
    if(!head){
        head=newNode;
        
    }
    else{
        newNode->next=head;
        head=newNode;
    }

}
template<class T> 
void LinkedList<T>::sortTheList(void) {
    if (!head || !head->next) {
        // If the list is empty or has only one element, it's already sorted
        return;
    }

    ListNode *current = head;
    ListNode *prev = nullptr;
    T temp;

    while (current) {
        prev = current->next;
        while (prev) {
            // If the current node's data is greater than the prev node's data, swap them
            if (current->data > prev->data) {
                temp = current->data;
                current->data = prev->data;
                prev->data = temp;
            }
            prev = prev->next;
        }
        current = current->next;
    }
}
template<class T> 
void LinkedList<T>::makeUniqueList(void) {
    ListNode *current = head;

    while (current) {
        ListNode *runner = current;

        // Iterate through the remaining nodes
        while (runner->next != nullptr) {
            if (current->data == runner->next->data) {
                ListNode *duplicate = runner->next;
                runner->next = runner->next->next;
                delete duplicate;
            } else {
                runner = runner->next;
            }
        }
        current = current->next;
    }
}

template <class T>
void LinkedList<T>::deleteNode(T data) {
    if (!head) {
        cout << "Empty list";
        return;
    }

    ListNode *current = head;
    ListNode *previous = nullptr;

    // If the node to be deleted is the head node
    if (head->data == data) {
        head = head->next;
        delete current;
        return;
    }

    while (current) {
        // If the current node contains the data to be deleted
        if (current->data == data) {
            // Adjust the next pointer of the previous node to skip the current node
            previous->next = current->next;
            delete current;
            return;
        }

        // Move to the next node
        previous = current;
        current = current->next;
    }

    cout << "Node with data " << data << " not found in the list";
}








int main(void){
 LinkedList<int> List1;
 List1.insertNode(6);
 List1.insertNode(7);
 List1.insertNode(8);
 List1.appendNode(1);
 List1.appendNode(2);
 List1.appendNode(3);
 List1.appendNode(4);
 List1.appendNode(6);
 List1.appendNode(4);
 List1.appendNode(8);
//  List1.displayList();
List1.makeUniqueList();
 List1.deleteNode(8);
 List1.sortTheList();
 List1.displayList();
}