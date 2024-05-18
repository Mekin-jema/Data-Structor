#include <iostream>
#ifndef LinkedList_H
#define LinkedList_H
#endif
using namespace std;

template <class T>
class LinkedList{
    private:
       struct NodeList{
            T data;
            struct NodeList *next;
       }
      NodeList *head;

    public:
      LinkedList(void){
        head=NULL;
      }
      ~LinkedList(void);
      void appendNode(T);
      void insertAtEnd(T);
      void deleteNode(T);
      void display(void);
    
    //   void insertAtBeginning(T);
    //   void insertAtEnd(T);
    //   void insertAtIndex(T)

};

template <class T>
void LinkedList<T>::insertAtEnd(T data){
  NodeList *nodePtr ,*newNode;
   newNode=new NodeList;
   newNode->data=data;
   newNode->next=NULL:
    if(!head){
        head=newNode;

    }
    else{
        nodePtr=head;
        while(nodePtr->next){
            nodePtr=nodePtr->next;
        }
        nodePtr=newNode;

    }

};
template <class T>
void LinkedList<T>::display(void){
    NodeList *nodePtr;
    if(!head){
        cout<<"create linkedLIst first!!";
    }
    else{
        nodePtr=head;
        while(nodePtr){
            cout<<nodePtr->value<<"->";
            nodePtr=nodePtr->next;
        }
    }
}


int main(void){
    LinkedList<int> List1;
    List1.appendNode(1);
    List1.appendNode(2);
    List1.appendNode(3);
    List1.appendNode(4);
    List1.display();
}