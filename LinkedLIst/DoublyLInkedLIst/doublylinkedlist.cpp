#include <iostream>
using namespace std;

struct Node {
    int data;
     Node * prev;
     Node * next;
};

Node * head;

Node * GetNewNode( int data){
    Node * newNode= new Node();
    newNode->prev=NULL;
    newNode->data=data;
    newNode->next=NULL;
    return newNode;

};

void insertAtBeg(int data)
{
 if(head==NULL){
  head=GetNewNode(data);
  return;
 }
 Node *newNode= GetNewNode(data);
  head->prev=newNode;
  newNode->next=head;
  head=newNode;
}

void display() {
    if (head == nullptr) {
        cout << "The node is empty";
    } else {
        Node* nodePtr = head;
        while (nodePtr->next) {
            // cout << nodePtr->data << "->";
            nodePtr = nodePtr->next;
        }
        head=nodePtr;
         
         while(head){
            cout<<head->data<<"-->";
            head=head->prev;

         }
    }
}

int main(){

    insertAtBeg(1);
    insertAtBeg(2);
    insertAtBeg(3);
    insertAtBeg(4);
    insertAtBeg(5);
    display();
}