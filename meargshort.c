#include <stdio.h>

void merge_sort(int A[],int N);

void mergepass(int A[],int N,int L,int B[]);

void merge(int A[], int n1,int index1,int B[], int n2, int index2,int C[],int index);





int main()

{

  int a[100],i,n;

  printf("enter the value of n");

  scanf("%d",&n);

  printf("enter value in array");

  for(i=0;i<n;i++)

  scanf("%d",&a[i]); 

  merge_sort(a,n);

 printf("After sorting\n");

  for(i=0;i<n;i++)

  printf("%d ",a[i]);

  

  



  return 0;

}



merge_sort(int A[], int N)

{

    int L=1, B[5]; //L HERE IS IN STRARTING EVERY NODE OF ARRAY IS SINGLE ARRAY SO L=1;

    while(L<N)

    {

        mergepass(A,N,L,B);

        mergepass(B,N,2*L,A);

        L=4*L;

    }

}



void mergepass(int A[],int N,int L, int B[])

{

    int j,LB,Q,S,R;

    Q=N/(2*L);  //Q= TOTAL NUMBER OF PAIR WE NEED TO MERGE; IF N=11 => Q=11/2*1=5

    S=2*L*Q;   //S= TOTAL NUMBER OF EELEMT COME IN PAIR; S= 2*1*5=10 .

    R=N-S;   //R TELL NUMBER OF ELEMNT LEFT WHICH CANNOT MAKE PAIR R=11-10=1 SO 1 ELE LEFT;

     

    for(j=0;j<Q;j++)

    {

        LB=(2*j)*L;  //HERE WE ASSIGN LOWER INDEX OF FIRST ARRAY;

        merge(A,L,LB,A,L,LB+L,B,LB); 

    }

    if(R<=L)// if one sub array left 

    {

        for(j=0;j<R;j++)

        B[S+j]=A[S+j];

    }

    else

    {

       merge(A,L,S,A,R-L,S+L,B,S) ; 

    }

}



void merge(int A[], int n1,int index1,int B[], int n2, int index2,int C[],int index)

{

    while (n1&& n2)

    {

        if(A[index1]<B[index2])

        {

            C[index]=A[index1];

            index++;

            index1++;

            n1--;

        }

        else

        {

            C[index]=B[index2];

            index++;

            index2++;

            n2--;

        }

    }

    while(n1)

    {

        C[index]=A[index1];

         index++;

          index1++;

        n1--;  

    }

    while(n2)

    {

        C[index]=B[index2];

            index++;

            index2++;

            n2--;

    }

}
