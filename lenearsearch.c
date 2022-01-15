/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int leanersearch(int arr[],int size,int element){
    for (int i = 0; i < size; i++) {
        if(arr[i]==element){
            return i;
        }
    }
    return -1;
}

int
main ()
{
  int arr[]={12,3,5,56,37,89,9,76,90,0,34,67,88,34,54};
  int size = sizeof(arr)/sizeof(int);
  int element ;
  printf("Which element you want to search\n");
  scanf("%d",&element);
  printf("\n");
  int searchindex= leanersearch(arr,size,element);
  printf("The element of arrry %d which index %d",element,searchindex);
  return 0;
}
