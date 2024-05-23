#include <iostream>
using namespace std;


struct Node {
    int data;
    Node * next;

};
Node * head;

Node * GetNewNode( int data){
  Node * newNode= new Node();
  newNode->data=data;
  newNode->next=NULL;
};

void push( int data){

    if(head==NULL) {
        head= GetNewNode(data);
    }
    Node * newNode= GetNewNode(data);
    newNode->next=head;
    head=newNode;

};

void pop(){
    if( head==NULL){
        cout<<"No element is to be deleted;";
    }
    else{
        Node * temp= head;
        head=head->next;
        delete(temp);

    }
};

void top(){
    cout<<head->data<<endl;
}

void display(){
    if(head==NULL) return;
    Node * nodePtr=head;
    while(nodePtr){
        cout<<nodePtr->data<<"->";
        nodePtr= nodePtr->next;
    }
};






int main(){

push(1);
push(2);
// top();
display();
cout<<" \n ===================="<<endl;
push(3);
push(4);
push(5);
// pop();
// top();
display();

}
