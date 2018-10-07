// Ascending Order

#include <stdio.h>

void main()
{
    int n;
    printf ("Enter the size of the array :\n");
    scanf ("%d", &n);
    int a[n];

    int i, key, flag = 0;

    printf ("Enter the elements to the array a[]:\n");
    for (i = 0; i < n; i++)
        scanf ("%d", &a[i]);

    printf ("The elements are: ");
    for (i = 0; i < n; i++)
        printf ("%d\t", a[i]);

    printf("\nEnter value to find: \n");
    scanf("%d", &key);

    int low = 0;
    int high = n - 1;
    int mid;

    while (low <= high)
    {
        int mid = low + (high-low)/2;


        if (a[mid] == key)
        {
            flag = 1;
            printf("%d is present at index %d.\n", key, mid);
            break;

        }

        else if (a[mid] < key)
            low = mid + 1;

        else
            high = mid - 1;
    }

    if (flag == 0)
        printf("%d is not present in array.\n", key);

}

-------------------------------------------------------------------------
// Descending Order

#include <stdio.h>

void main()
{
    int n;
    printf ("Enter the size of the array :\n");
    scanf ("%d", &n);
    int a[n];

    int i, key, flag = 0;

    printf ("Enter the elements to the array a[]:\n");
    for (i = 0; i < n; i++)
        scanf ("%d", &a[i]);

    printf ("The elements are: ");
    for (i = 0; i < n; i++)
        printf ("%d\t", a[i]);

    printf("\nEnter value to find: \n");
    scanf("%d", &key);

    int low = 0;
    int high = n - 1;
    int mid;

    while (low <= high)
    {
        int mid = low + (high-low)/2;


        if (a[mid] == key)
        {
            flag = 1;
            printf("%d is present at index %d.\n", key, mid);
            break;

        }

        else if (a[mid] < key)
            high = mid - 1;

        else
            low = mid + 1;
    }

    if (flag == 0)
        printf("%d is not present in array.\n", key);

}

-------------------------------------------------------------------------------

// Using Recursion

#include <stdio.h>

int binarySearch(int a[], int low, int high, int key);

void main()
{
    int n;
    printf ("Enter the size of the array :\n");
    scanf ("%d", &n);
    int a[n];

    int i, key, result;

    printf ("Enter the elements to the array a[]:\n");
    for (i = 0; i < n; i++)
        scanf ("%d", &a[i]);

    printf ("The elements are: ");
    for (i = 0; i < n; i++)
        printf ("%d\t", a[i]);

    printf("\nEnter value to find: \n");
    scanf("%d", &key);

    result = binarySearch(a, 0, n-1, key);

   (result == -1)? printf("%d is not present in array", key):
                printf("%d is present at index %d", key, result);
}

int binarySearch(int a[], int low, int high, int key)
{
   if (low <= high)
   {
        int mid = low + (high - low)/2;

        if (a[mid] == key)
            return mid;

        if (a[mid] > key)
            return binarySearch(a, low, mid - 1, key);


        return binarySearch(a, mid + 1, high, key);
   }
   return -1;
}

-------------------------------------------------------------------------

// With Insertion Sort

#include <stdio.h>

void main()
{
    int n;
    printf ("Enter the size of the array :\n");
    scanf ("%d", &n);
    int a[n];

    int i, temp, j, key, flag = 0;

    printf ("Enter the elements to the array a[]:\n");
    for (i = 0; i < n; i++)
        scanf ("%d", &a[i]);

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

    printf("\nEnter value to find: \n");
    scanf("%d", &key);

    int low = 0;
    int high = n - 1;
    int mid;

    while (low <= high)
    {
        int mid = low + (high-low)/2;


        if (a[mid] == key)
        {
            flag = 1;
            printf("%d is present at index %d.\n", key, mid);
            break;

        }

        else if (a[mid] < key)
            low = mid + 1;

        else
            high = mid - 1;
    }

    if (flag == 0)
        printf("%d is not present in array.\n", key);

}
