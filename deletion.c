/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int
main ()
{
  printf ("Your arry display method");
  int arry[10], n, pos, i;
  printf ("Enter the value of n: ");
  scanf ("%d\n", &n);
  printf("\nEnter the element of array\n");
  for (int i = 0; i < n; i++)
    {
      scanf ("%d", &arry[i]);
      printf ("%d ", arry[i]);
    }
  
  printf ("\nEnter the position of element where you are deletion: ");
  scanf ("%d", &pos);
  if (pos >= 0 && pos < 10)
    {
      for (i = pos - 1; i < n - 1; i++)
	{
	  arry[i] = arry[i+1];
	}
      printf ("\nafter deletion\n");
      for (i = 0; i < n - 1; i++)
	{
	  printf ("%d\n", arry[i]);
	}
    }
  else
    {
      printf ("\nInvalid input!....");
    }
  return 0;
}
