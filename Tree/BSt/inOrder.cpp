#include  <iostream>
#include <queue>
using namespace std;
  

 


 struct BstNode {
    char data;
    BstNode * left;
    BstNode * right;
  }


void levleOrder(BstNode *root){
    queue<BstNode> Q;
    if (!root) return;
    Q.push(root);
    while (!Q.empty())
    {

    BstNode current= Q.front();
    cout<<current->data<<" ";
    if(current->left!=NULL){
        Q.push(current->left)
    }
        if(current->right!=NULL){
        Q.push(current->right)
    }
   Q.pop();
    }
    


}
// Preorder
void PreOrder( BstNode *root){
    if (root==nullptr)return;
    cout<<root->data<<" ";
    PreOrder(root->left);
    PreOrder(root->right);




    
}
void PreOrder(){
    
}
void PreOrder(){
    
}


int main(){

}
