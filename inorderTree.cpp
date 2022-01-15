/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;
struct node{
    int data;
    struct node* left;
    struct node* right;
    node(int data){
        this->data = data;
        this->left = nullptr;
        this->right = nullptr;
    }
};
void inorder(struct node* root){
    if( root==nullptr){
        return;
    }
    inorder(root->left);
    // printf("%d ",root->data);
    cout << root->data << " ";
    inorder(root->right);
}

int main()
{
   node* root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
    root->right->left= new node(6);
    root->right->right = new node(7);
    inorder(root);

    return 0;
}
