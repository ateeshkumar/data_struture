
#include <stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* left;
    struct node* right;
    
};
struct node* createroot(int data){
    struct node*p;
    p = (struct node*)malloc(sizeof(struct node));
    p->data = data;
    p->left = NULL;
    p->right = NULL;
    printf("%d ",p->data);
}
int main()
{
    struct node*p = createroot(1);
    struct node*p1 = createroot(2);
    struct node* p2 = createroot(3);
    struct node* p3 = createroot(4);
    struct node* p4 = createroot(5);
    struct node* p5 = createroot(6);
    struct node* p6 = createroot(7);
    p->left = p1;
    p->right = p2;
    p->left->left = p3;
    p->left->right = p4;
    p->right->left = p5;
    p->right->right = p6;
    

    return 0;
}
