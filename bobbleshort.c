/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>



int main()

{

  int a[5],i,j,temp;

  printf("enter elemnts in array\n");

  for(i=0;i<5;i++)

  scanf("%d",&a[i]);

   

  for(i=0;i<5-1;i++)

  {

    for(j=0;j<5-i-1;j++)

    {

      if(a[j]>a[j+1])

      {

        temp=a[j];

        a[j]=a[j+1];

        a[j+1]=temp;

      }

    }

  }

   

  printf("After sorting ");

  for(i=0;i<5;i++)

  printf("%d ",a[i]);



  return 0;

}
