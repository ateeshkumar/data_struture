
#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node* next;
};
struct node* front = NULL;
struct node* rear = NULL;
struct node* temp;
int main()
{
    int choice;
    printf("enter your choice: \n for insertion press 1\n for Deletetion press 2\n for Disply press 3 \n for exit press 4\n");
    scanf("%d",&choice);
    while(choice != 4){
        switch(choice){
            case 1:
                insert();
                break;
            case 2:
                Delete();
                break;
            case 3:
                Disply();
                break;
            case 4:
                printf("Exit\n");
                break;
            default:
                printf("invalid input!!\n");
        }
    }

    return 0;
}
void insert(){
    int val;
    printf("Insert the value in queue: \n");
    scanf("%d", &val);
    if(rear == NULL){
        rear = (struct node*)malloc(sizeof(struct node));
        rear->next = NULL;
        rear->data = val;
        front = rear;
    }
    else{
        temp = (struct node*)malloc(sizeof(struct node));
        rear->next = temp;
        temp->data = val;
        temp->next = NULL;
        rear = temp;
        
    }
}
void Delete(){
    temp = front;
    if(front = NULL){
        printf("queue is underflow\n");
        return;
    }
    else if(temp->next != NULL){
        printf("deleted element is %d\n",front->data);
        free(front);
        front = temp;
    }
    else{
        printf("the deleted element is %d\n",front->data);
        free(front);
        front = NULL;
        rear = NULL;
    }
}
void Disply(){
    temp = front;
    if((front==NULL) && (rear == NULL)){
        printf("queue is empty\n");
        return;
    }
    printf("queue element are: \n");
    while(temp != NULL){
        printf("%d ",temp->data);
        temp = temp->next;
    }
    printf("\n");
}