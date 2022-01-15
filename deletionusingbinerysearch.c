/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
int
binerysearch (int arr[], int size, int element)
{
  int low, mid, high;
  low = 0;
  high = size - 1;
  //mid = (low+high)/2;
  while (low <= high)
    {
      mid = (low + high) / 2;
      if (arr[mid] == element)
	{
	  return mid;
	}
      if (arr[mid] < element)
	{
	  low = mid + 1;
	}
      else
	{
	  high = mid - 1;
	}

    }
  return -1;
}

int
main ()
{
  int arr[] = { 12, 23, 34, 56, 67, 89, 100, 102, 134, 140 };
  int size = sizeof (arr) / sizeof (int);
  int element;
  for (int i = 0; i < size; i++) {
      printf("%d ",arr[i]);
  }
  printf ("\nWhich element you want to delete\n");
  scanf ("%d", &element);
  printf ("\n");
  int searchindex = binerysearch (arr, size, element);
  printf ("You are enter element %d at index %d\n", element, searchindex);
  if (searchindex >= 0 && searchindex < 10)
    {
      for (int i = searchindex; i < size - 1; i++)
  {
    arr[i] = arr[i+1];
  }
      
      printf ("\nafter deletion\n");
      for (int i = 0; i < size - 1; i++)
  {
    printf ("%d\n", arr[i]);
  }
    }
  else
    {
      printf ("\nInvalid input!....");
    }
  return 0;
}
