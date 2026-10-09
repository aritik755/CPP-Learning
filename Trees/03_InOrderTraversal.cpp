// In InOrder traversal first we visit the left child then root node and then right child.
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

void InOrder(Node* root){ // Time Complexity = O(n)
  if(root == NULL) return;

  InOrder(root->left);
  cout<<root->data<<" ";
  InOrder(root->right);
}

int main(){

  vector<int> preorder = {1,2,-1,-1,3,4,-1,-1,5,-1,-1}; 
  // For building a tree
  Node* root = buildTree(preorder);

  // For traversing the entire tree
  InOrder(root);
  return 0;
}