#include <iostream>
 using namespace std;


 struct Node {
    int data;
    Node *right;
    Node  *left;
 }

 IsSubTreeLessor(Node *root, int value){
  if(root==nullptr) return true;
  if (root->data<value && 
  IsSubTreeLessor(root->left,value)&&
   IsSubTreeLessor(root->right,value))
 }
 IsSubTreeLessor(Node *root, int value){
  if(root==nullptr) return true;
  if (root->data<value && 
  IsSubTreeLessor(root->left,value)&&
   IsSubTreeLessor(root->right,value))



bool IsBinarySearchTree(Node * root){
    if(IsSubTreeLessor(root->left,root->data) && 
    IsSubTreeGreator(root->right,root->data)
     && IsBinarySearchTree(root->right)&&
      IsBinarySearchTree(root->left))
      {
        return true
      }
}






 int main(){

 }