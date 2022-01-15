#include<stdio.h>

#include<conio.h>

#include<ctype.h>

#define SIZE 5



void enqueue(int);

void dequeue();

void display();



int queue[SIZE], front = -1, rear = -1;



void main()

{

  int choice, value;

  

  while(1){

   printf("\n****** MENU ******\n");

   printf("1. Insert\n2. Delete\n3. Display\n4. Exit\n");

   printf("Enter your choice: ");

   scanf("%d",&choice);

   switch(choice){

	 case 1:

	   printf("\nEnter the value to be insert: ");

		 scanf("%d",&value);

		 enqueue(value);

		 break;

	 case 2:

	 dequeue();

		 break;

	 case 3:

	 display();

		 break;

 

	 default: 

	 printf("\nPlease select the correct choice!!!\n");

   }

  }

}





void enqueue(int ele)

{

  

   if((front==rear+1) || ((SIZE==rear+1)&&(front==0)))

   printf("queue is full");

  else if(front==-1 && rear==-1)

  {

    front=rear=0;

   queue[rear]=ele;

  }





 else if(rear==SIZE-1)

 {

  rear=0;

  queue[rear]=ele;

  }

 else

{

  rear++;

 queue[rear]=ele;

}



}





void dequeue()

{

  if(front==-1 && rear==-1)

printf("queue is empty");



else if(front==rear)

{

printf("deleted element is %d",queue[front]);

front=rear=-1;



}

else if(front==SIZE-1)

{

  printf("deleted elemnt is %d",queue[front]);

front=0;

}

else

{

 printf("deleted elemnt is %d",queue[front]);

 front++;

}



}

void display()

{

  if(front == -1)

   printf("\nCircular Queue is Empty!!!\n");

  else{

   int i = front;

   printf("\nCircular Queue Elements are : \n");

   if(front <= rear){

	 while(i <= rear)

	  printf("%d\t",queue[i++]);

   }

   else{

	 while(i <= SIZE - 1)

	  printf("%d\t", queue[i++]);

	 i = 0;

	 while(i <= rear)

	  printf("%d\t",queue[i++]);

   }

  }

}
