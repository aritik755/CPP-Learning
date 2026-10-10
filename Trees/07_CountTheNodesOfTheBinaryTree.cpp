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

// Count of a Tree Nodes
int count(Node* root){ // Time Complexity = O(n)
  if(root == NULL) return 0;
  
  int leftCnt = count(root->left);
  int rightCnt = count(root->right);

  return leftCnt + rightCnt + 1;
}

int main(){

  vector<int> preorder = {1,2,-1,-1,3,4,-1,-1,5,-1,-1}; 
  Node* root = buildTree(preorder);

  cout<<"Count: "<<count(root)<<endl;
  return 0;
}