#include<bits/stdc++.h>
using namespace std;

struct node
{

     int data;
     struct node* left;
     struct node* right;
     node(int value){
          data = value;
          left=NULL;
          right=NULL;
     }
};

void inorder(struct node* root){
     if(root==NULL){return;}
      inorder(root->left);
      cout<<root->data<<" ";
      inorder(root->right);
}
int main(){
  struct node* node=new struct node(7);
  node->left=new struct node(6);
    node->right=new struct node(8);
    inorder(node);
    cout<<endl;
  return 0;
}