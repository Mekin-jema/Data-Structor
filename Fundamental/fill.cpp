#include <iostream>
using namespace std;
#include <queue>


// find the max and the minimum value of the given tree
// we can  solve  this problem using loop and 

struct BstNode {
    int data;
    BstNode * right ;
    BstNode * left;
};
int FindMin(BstNode *root){
    if (root=nullptr){
        cout<<" Error:the tree is empty";
        return -1;
    }
    BstNode * current=root;
    while (current->left){
        current=current->left;
    }
    return current->data;
}

// To find the maximum  data of the given tree;
int FindMax(BstNode * root){
    if(root==nullptr){
        cout<<"Error: the tree is empty";
    }
    else{
     BstNode *current=root;
     while (current->right){
        current=current->right;

     }
     return current->data;
  }
} 

// Print the minimum   of the  given tree using recursion 
int MinRecursively(BstNode *root ){
    if (root==nullptr){
        cout<<"The  tree is empty";
    }
    else if (root->left==nullptr){
        return root->data;
    }
    else{
        MinRecursively(root->left);
    }
}
// print the max of the  given tree  using recursion
int MaxRecursively(BstNode *root){
    if(root=NULL){
        cout<<"Error: the tree is empty";
        return -1;
    }
    else if(root->right==NULL){
        return root->data;
    }
    else {
       return MaxRecursively(root->right); // what  is the importance  of having  return in this case
    }
}


int FindHeight(BstNode *root){
    if(root==NULL){
        return -1;
    }
    return max( FindHeight(root->left),FindHeight(root->right))+1 ;
}


// the time complexity is big of n
//  space -complextiy   is also  big of         // level order  traversal
void  LevelOrder(BstNode *root){
  if(root==NULL) return ;
     queue<BstNode  *> Q;
     Q.push(root);
  while (!Q.empty()){
    BstNode * current=Q.front();
    cout<<current->data<<" ";
    if( current->left!=NULL) {
        Q.push(current->left);
    }
    if( current->right!=NULL) {
        Q.push(current->right);
    }
    Q.pop();
  }
}