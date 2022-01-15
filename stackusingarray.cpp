#include<stdio.h>
int stack[100],choice,n,top,x,i;
void push(void);
void sum(void);
void display(void);
int main()
{
    top=-1;
    int s = 0;
    printf("\n Enter the size of STACK[MAX=100]:");
    scanf("%d",&n);
    printf("\n\t STACK OPERATIONS USING ARRAY");
    printf("\n\t 1.PUSH\n\t 4.sum\n\t 2.DISPLAY\n\t 3.EXIT");
    do
    {
        printf("\n Enter the Choice:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            {
                push();
                break;
            }
            case 2:
            {
                display();
                break;
            }
            case 3:
            {
                printf("\n\t EXIT POINT ");
                break;
            }
            case 4:
            {
                printf("\nSum of element  is: ");
                sum();
            }
            default:
            {
                printf ("\n\t Please Enter a Valid Choice(1/2/3/4)");
            }
                
        }
    }
    while(choice!=4);
    return 0;
}
void push()
{
    if(top>=n-1)
    {
        printf("\n\tSTACK is over flow");
        
    }
    else
    {
        printf(" Enter a value to be pushed:");
        scanf("%d",&x);
        top++;
        stack[top]=x;
    }
}
void sum(){
    int s = 0;
    for (int i = top; i >=0; i--) {
        s+=stack[i];
    }
    printf("\n sum of element is:%d",s);
}
void display()
{
    if(top>=0)
    {
        printf("\n The elements in STACK \n");
        for(i=top; i>=0; i--)
            printf("\n%d",stack[i]);
        printf("\n Press Next Choice");
    }
    else
    {
        printf("\n The STACK is empty");
    }
   
}
