#include <iostream>
using namespace std;
#ifndef LinkedList
#define LinkedList
#endif
template <class T>
class LinkedList
{
    private:
     struct node{
        T data;
       struct  node *next;
     }

     node *head;
     
     public:
      LinkedList(void){
        head=NULL;
      }
      ~LinkedList(void);
      void appendNode(T);
      void insertNode(T);
      void deleteNode(T);
      void displayNode(void);

};
template<class T>
void LinkedList<T>::append(T data){
  node *nodePtr,*newNode;
  newNode->data=data;
  newNode->next=NULL;
  if(!head){
    head= newNode;
  }
  else{
    nodePtr=head;
    while(nodePtr->next!=NULL){
       nodePtr= nodePtr->next;
    }
    nodePtr->next=newNode;
  }
}

int main(){
  LinkedList<int> LinkedList1;

};
