

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
    printf("-------------------------SEARCHING----------------------\n");
  int arr[10];
  int size = sizeof(arr)/sizeof(int);
  int element ;
  printf("Enter the element of array\n");
  for (int i = 0; i <size; i++) {
      scanf("%d",&arr[i]);
      printf("%d ",arr[i]);
      printf("\n");
  }
  
  printf("Which element you want to search\n");
  scanf("%d",&element);
  printf("\n");
  int searchindex= leanersearch(arr,size,element);
  printf("The element of arrry %d which index %d",element,searchindex);
  return 0;
}

