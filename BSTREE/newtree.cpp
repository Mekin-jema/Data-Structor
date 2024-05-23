#include <iostream>
 using namespace std;

template <class T>
class BstTree{
  private:

    struct Node {
        T data;
        Node *right;
        Node *left;
    };

 public :
  BstTree(){
    right=nullptr;
    left=nullptr;
  }

  ~BstTree(){
    deleteNode(T);
  }
   
Node *root;
 void insertNode(int);
void destroySubTree(TreeNode *);
void deleteNode(int, TreeNode *&);
void makeDeletion(TreeNode *&);
void displayInOrder(TreeNode *);
void displayPreOrder(TreeNode *);
void displayPostOrder(TreeNode *);
bool searchNode(int);
void remove(int);
}

void Bst







