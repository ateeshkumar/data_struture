#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct stack{
    char *arr;
    int Top;
    int size;
};
int stackTop(struct stack* sp){
    return sp->arr[sp->Top];
}
int isEmpty(struct stack *ptr){
    if(ptr->Top==-1){
        return 1;
    }
    else{
        return 0;
    }
}
int isFull(struct stack *ptr){
    if(ptr->Top==ptr->size-1){
        return 1;
    }
    else{
        return 0;
    }
    
}
void push(struct stack *ptr, char val){
    if(isFull(ptr)){
        printf("Stack is overflow cannot push %d\n",val);
    }
    else{
        ptr->Top++;
        ptr->arr[ptr->Top]= val;
    }
}
char pop(struct stack* ptr){
    if(isEmpty(ptr)){
        printf("Cannot pop any element becouse stack is empty\n");
        return -1;
    }
    else{
        char val =ptr->arr[ptr->Top];
        ptr->Top--;
        return val;
    }
}
int precedence(char ch){
    if(ch=='*' || ch=='/'){
        return 3;
    }
    else if(ch=='+' || ch=='-'){
        return 2;
    }
    else{
        return 0;
    }
}
int isOperator(char ch){
    if(ch=='*' || ch=='/' || ch=='+' || ch=='-'){
        return 1;
    }
    else{
        return 0;
    }
}
char* infixTopostfix(char* infix){
    struct stack* sp=(struct stack*)malloc(sizeof(struct stack));
    sp->size=10;
    sp->Top= -1;
    char* postfix = (char*)malloc((strlen(infix)+1)*sizeof(char));
    sp->arr = (char*)malloc(sp->size*sizeof(char));
    int i=0;
    int j=0;
    while(infix[i]!='\0'){
        if(!isOperator(infix[i])){
            postfix[j]=infix[i];
            j++;
            i++;
            
        }
        else{
            if(precedence(infix[i])>precedence(stackTop(sp))){
                push(sp, infix[i]);
                i++;
            }
            else{
                postfix[j]=pop(sp);
                j++;
            }
        }
    }
    while(!isEmpty(sp)){
        postfix[j]=pop(sp);
        j++;
    }
    postfix[j]='\0';
    return postfix;
}
int main()
{
    char*infix="a*b+c*(d-e)/f";
   
    printf("\nPostfix is %s",infixTopostfix(infix));

    return 0;
}
