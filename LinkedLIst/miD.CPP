#include<iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* root;

Node* GetNewNode(int data) {
    Node* newNode = new Node();
    newNode->data = data;
    newNode->next = nullptr;
    return newNode; // Return the newly created node
}

void CreateLinkedList(int data) {
    if (root == nullptr) {
        root = GetNewNode(data);
    } else {
        Node* nodePtr = root;
        while (nodePtr->next) {
            nodePtr = nodePtr->next;
        }
        nodePtr->next = GetNewNode(data);
    }
}

void display() {
    if (root == nullptr) {
        cout << "The node is empty";
    } else {
        Node* nodePtr = root;
        while (nodePtr) {
            cout << nodePtr->data << "->";
            nodePtr = nodePtr->next;
        }
    }
}

void insertAtIndex(int data, int index) {
    if(root==nullptr){
        root=GetNewNode(data);
    }
    else{
     Node * nodePtr=root;
     Node * current;
     Node * newNode=GetNewNode(data);
     int temp=0;
     while(nodePtr !=NULL && temp !=index){
    
         nodePtr=nodePtr->next;
         temp++;
    


        }
            current=nodePtr;
            nodePtr->next=newNode;
            newNode->next=current->next;
     }
    }

  void deleteNode(int node){
    if(node==1){
        Node * nodePtr=root->next;
        delete(root);
        root=nodePtr;
    }
    else{
        Node * nodePtr=root;

        for(int i=1; i< node-1; i++){
            nodePtr=nodePtr->next;
        }
        Node * temp= nodePtr->next;
        // Node * temp2= temp->next;
        nodePtr->next=temp->next;

        delete(temp);
    }

  }

   void ReverseDisplay(){
      Node * prev,*current, *next;
      current=root;
      prev=NULL;
      while(current){
        next=current->next;
        // prev=current;
        current->next=prev;
        prev=current;
        current=next;
      }
      root=prev;

              
   }
   void RecursionDisplay( Node * root){
     if(root==NULL) return;
        cout<<root->data<<"-->";
        RecursionDisplay(root->next)  ;
   }
   void RecursiveReverse( Node *root){
     if(root==NULL)return;
      RecursiveReverse(root->next);
      cout<<root->data<<"-->";
   }



int main() {
    CreateLinkedList(12);
    CreateLinkedList(11);
    CreateLinkedList(13);
    CreateLinkedList(15);
    CreateLinkedList(16);


    // insertAtIndex(20, 2);
    // display();
    // while(root){
        
    // cout<<"\n enter the node to be deleted:"<<endl;
    // int node;
    // cin>> node ;
    // deleteNode(node);
    // }
    ReverseDisplay();
    cout<<"+++++++++++++"<<endl;
    display();
     RecursionDisplay(root);
     cout<<"-->" <<endl;
    RecursiveReverse(root);


    return 0;
}
