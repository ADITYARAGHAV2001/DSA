#include<iostream>
using namespace std;
class Node{
public:
 int data;
 Node* left;
 Node* right;
 Node(int data){
    this->data = data;
    this->left = NULL;
    this->right = NULL;
 }
};
Node* buildTree(Node* &root){
   int data;
   cout<<"Enter the data"<<endl;
   cin>>data;
   if(root == NULL){
    root = new Node(data);
   } 
   if(data < root->data){
     root->left = buildTree(root->left);
   }
}
int main(){
Node* root = NULL;
return 0;
}