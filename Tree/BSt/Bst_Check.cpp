#include <iostream>
 using namespace std;


 struct Node {
    int data;
    Node *right;
    Node *left;
 };


 bool BstCehck(Node * root){

 if(root==nullptr)return true;
 

 if(


  isGreator(root->left,root->data)&&
  isLessor(root->right,root->data)&&
  bsearch(root->left)&&
  bsearch(root->right)) return true;
 }
 
    

    bool isGreator( Node * root ,int data){
        if(root==nullptr) return true;
        if(root->data< data && isGreator(root->left)) && isGreator(root->right)  return true;
        else{
            return false;
        }
    }

    bool isLessor(Node * root, data){
        if(root->data >data ) return true
    }