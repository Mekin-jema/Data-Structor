#include <iostream>
#include<stack>

using namespace std;

struct Node{
    Node * next;
    int data;
};


Node * head=NULL;

Node * GetNewNode(int data){
    Node * newNode= new Node();
    newNode->data=data;
    newNode->next=NULL;
    return newNode;
}
void insert(int data){

    if(head==NULL){
        head= GetNewNode(data);
        return;
    }
    Node * newNode= GetNewNode(data);
    newNode->next=head;
    head= newNode;


}
void display()
{
    while( head){
        cout<<head->data<<"-->";
        head= head->next;
    }
}

void ReverseLinkedList(){
    stack<int> S;
    Node * nodePtr= head;
    while(nodePtr){
        S.push(nodePtr->data);
        nodePtr= nodePtr->next;
    }

    while(!S.empty()){
        cout<<S.top()<<"-->";
        S.pop();
    }

}

int main(){
 insert(1);
 insert(2);
 insert(3);
 insert(4);

ReverseLinkedList();
cout<<"\n";
display()

}

