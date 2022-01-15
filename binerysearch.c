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
  printf ("Which element you want to search\n");
  scanf ("%d", &element);
  printf ("\n");
  int searchindex = binerysearch (arr, size, element);
  printf ("element of array %d which index %d\n", element, searchindex);
  return 0;
}
