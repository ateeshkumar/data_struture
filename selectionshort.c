#include <stdio.h>
int a[30], n;
void selectionsort()
{
    int i, j, min, temp;
    for (i=0; i<n; i++)
    {
        min = i;
        for (j=i+1; j<n; j++)
        {
            if (a[j] < a[min])
                min = j;
        }
        temp = a[i];
        a[i] = a[min];
        a[min] = temp;
    }
}
void main()
{
    int i;
    printf("\nEnter size of an array: ");
    scanf("%d", &n);
    printf("\nEnter elements of an array:\n");
    for(i=0; i<n; i++)
        scanf("%d", &a[i]);
    selectionsort();
    printf("\n\nAfter sorting:\n");
    for(i=0; i<n; i++)
        printf("\n%d", a[i]);
    getch();
}