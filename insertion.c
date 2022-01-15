/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    printf("Your arry display method");
    int arry[10],n,pos,ele,i;
    printf("Enter the value of n");
    scanf("%d\n",&n);
    for (int i = 0; i <n; i++) {
        scanf("%d",&arry[i]);
        printf("%d\n",arry[i]);
    }
    printf("\ninsert the element in array");
    scanf("%d",&ele);
    printf("\nEnter the position of element where you are insert");
    scanf("%d",&pos);
    if(pos>=0 && pos<10)
    {
    for(i = n-1;i>=pos-1; i-- )  
    {
        arry[i+1]=arry[i];
    }
    arry[pos-1]=ele;
    printf("\nafter insertion\n");
    for(i=0;i<n+1;i++){
        printf("%d\n",arry[i]);
    }
    }
    else
    {
        printf("\nInvalid input!....");
    }
    return 0;
}
