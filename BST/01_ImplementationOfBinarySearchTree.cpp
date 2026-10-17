// In Binary Search Tree(BST) we have leftSubTree_Values < parentNode_Value < rightSubTree_Values.
// BST contains all unique values.
// BST is basically a sorted tree.
// BST helps in optimizing the time complexity of the search in the tree to O(Height of tree/logn) from O(n).
// In BST inorder traversal is sorted sequence.
#include<iostream>
#include<vector>
using namespace std;

class Node {
public:
  int data;
  Node* left;
  Node* right;

  Node(int val){
    data = val;
    left = right = NULL;
  }
};

Node* insert(Node* root, int val){
  if(root == NULL) return new Node(val);

  if(val < root->data){
    root->left = insert(root->left, val);
  }
  else{
    root->right = insert(root->right, val);
  }

  return root;
}

Node* buildBST(vector<int> &arr){
  Node* root = NULL;

  for(int val : arr){
    root = insert(root, val);
  }

  return root;
}

void inorder(Node* root){
  if(root == NULL) return;

  inorder(root->left);
  cout<<root->data<<" ";
  inorder(root->right);
}

int main(){

  vector<int> arr = {3, 2, 1, 5, 6, 4};

  Node* root = buildBST(arr);
  inorder(root);
  cout<<endl;

  return 0;
}