//
//  main.cpp
//  DSA - PRE ORDER TRAVERSAL
//
//  Created by shivam krishna on 05/03/22.
//
#include <iostream>
#include <math.h>

using namespace std;
struct node{
    int data;
    node* left;
    node* right;
};
node* newNode(int data){
    node* element = new struct node;
    element->left = NULL;
    element->right = NULL;
    element->data = data;
    return element;
}
void display(node * node){
    if(node==NULL) return;
    cout<<node->data<<endl;
    display(node->left);
    display(node->right);
}
bool solve(node* root,long long mini,long long maxi){
       if(!root) return true;
       else if(root->data <= mini or root->data >= maxi) return false;
       
       bool ls = solve(root->left,mini,root->data);
       bool rs = solve(root->right,root->data,maxi);
       bool res = ls and rs;
       return res;
   }
bool isValidBST(node* root){
       long long lowRange = pow(-2,31)-1;
       long long highRange = pow(2,31);
       return solve(root,lowRange,highRange);
}
int main() {
    node* root = newNode(1);
    root->right = newNode(3);
    root->left = newNode(2);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
    display(root);
    cout<<isValidBST(root)<<endl;
    // 1 2 4 5 3
    return 0;
}
