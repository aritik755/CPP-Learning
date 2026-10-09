// Binary Tree is hirerchial data structure or non linear data structure.
// A Binary Tree contains a Root Node from which different nodes are connected throught branches.
// A tree is called binary tree when each node in the tree has at max 2 nodes.
// The Node that are connected to upper(parent) node are childern node.
// Every Node contain two nodes left node or child and right node or child.
// The node which is present in the end of the tree which has 0 child or node that nodes is called the leaf node of the binary tree.

#include<iostream>
#include<vector>
using namespace std;

class Node{
public:
  int data;
  Node* left;
  Node* right;
  
  Node(int val){
    data = val;
    left = right = NULL;
  }

};

static int idx = -1;
Node* buildTree(vector<int> preorder){ // Time Complexity = O(n)
  idx++;
  
  if(preorder[idx] == -1) return NULL;

  Node* root = new Node(preorder[idx]);
  root->left = buildTree(preorder);
  root->right = buildTree(preorder);

  return root;
}

int main(){

  vector<int> preorder = {1,2,-1,-1,3,4,-1,-1,5,-1,-1}; 
  // Acc. to this sequence firstly the left part of each node new node is created firstly.

  Node* root = buildTree(preorder);
  cout<<root->data<<endl;
  cout<<root->left->data<<endl;
  cout<<root->right->data<<endl;
  return 0;
}