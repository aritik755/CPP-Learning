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

bool search(Node* root, int val){
  if (root == NULL) return false;

  if(root->data == val){
    return true;
  }
  else if(root->data > val){
    return search(root->left, val);
  }
  else{
    return search(root->right, val);
  }
}

Node* getInorderSuccessor(Node* root){ // left most node in right subtree
  while(root != NULL && root->left != NULL){
    root = root->left;
  }
  return root;
}

Node* deleteNode(Node* root, int key){ // key = value to delete 

  if(root == NULL) return NULL;

  if(key < root->data){
    root->left = deleteNode(root->left, key);
  }
  else if(key > root->data){
    root->right = deleteNode(root->right, key);
  }
  else{
    // Case 1 & 2: key == root or left or right Child is NULL
    if(root->left == NULL){
      Node* temp = root->right;
      delete root;
      return temp;
    }
    else if(root->right == NULL){
      Node* temp = root->left;
      delete root;
      return temp;
    }
    // Case 3: 2 children case
    else{
      Node* IS = getInorderSuccessor(root->right);
      root->data = IS->data;
      deleteNode(root->right, IS->data);
    }
  }
  return root;
}

int main(){

  vector<int> arr = {3, 2, 1, 5, 6, 4};

  Node* root = buildBST(arr);
  cout<<"Before Deletion: ";
  inorder(root);
  cout<<endl;

  deleteNode(root, 6);

  cout<<"After Deletion: ";
  inorder(root);
  cout<<endl;
  
  return 0;
}