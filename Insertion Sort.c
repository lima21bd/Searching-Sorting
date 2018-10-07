//Ascending Order

#include <stdio.h>

void main()
{
    int n;
    printf ("Enter the size of the array:\n");
    scanf ("%d",&n);

    int a[n], i, temp, j;

    printf ("Enter the elements to the array a[] :\n");
    for (i = 0; i < n; i++)
        scanf ("%d",&a[i]);

    printf ("Before Sorting : ");
    for (i = 0; i < n; i++)
        printf ("%d\t",a[i]);

    for (i = 1; i < n; i++)
    {
        temp = a[i];
        for (j = i; j>0 && temp < a[j - 1]; j--)
        {
            a[j] = a[j - 1];
        }
        a[j] = temp;
    }

    printf ("\nAfter Sorting : ");
    for (i = 0; i < n; i++)
        printf ("%d\t",a[i]);

}

---------------------------------------------------------

// Descending Order

#include <stdio.h>

void main()
{
    int n;
    printf ("Enter the size of the array:\n");
    scanf ("%d",&n);

    int a[n], i, temp, j;

    printf ("Enter the elements to the array a[] :\n");
    for (i = 0; i < n; i++)
        scanf ("%d",&a[i]);

    printf ("Before Sorting : ");
    for (i = 0; i < n; i++)
        printf ("%d\t",a[i]);

    for (i = 1; i < n; i++)
    {
        temp = a[i];
        for (j = i; j>0 && temp > a[j - 1]; j--)
        {
            a[j] = a[j - 1];
        }
        a[j] = temp;
    }

    printf ("\nAfter Sorting : ");
    for (i = 0; i < n; i++)
        printf ("%d\t",a[i]);

}

