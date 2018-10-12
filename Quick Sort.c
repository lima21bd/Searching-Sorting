// Ascending Order

#include <stdio.h>

void quick_sort (int a[], int low, int high);
int partition (int a[], int low, int high);

void main()
{
    int n;
    printf ("Enter the size of the array:\n");
    scanf ("%d",&n);

    int a[n], i;

    printf ("Enter the elements to the array a[] :\n");
    for (i = 0; i < n; i++)
        scanf ("%d",&a[i]);

    printf ("Before Sorting : ");
    for (i = 0; i < n; i++)
        printf ("%d\t",a[i]);

    quick_sort (a, 0, n - 1);

    printf ("\nAfter Sorting : ");
    for (i = 0; i < n; i++)
        printf ("%d\t",a[i]);
}

void quick_sort (int a[], int low, int high)
{
    if (low >= high)
        return;

    else
    {
        int pivot_position = partition (a, low, high);
        quick_sort (a, low, pivot_position - 1);
        quick_sort (a, pivot_position + 1, high);
    }
}

int partition (int a[], int low, int high)
{
    int pivot = a[high];
    int i = low - 1;
    int j, temp1, temp2;

    for (j = low; j <= high - 1; j++)
    {
        if (a[j] <= pivot)
        {
            i = i + 1;
            temp1 = a[i];
            a[i] = a[j];
            a[j] = temp1;
        }
    }

    temp2 = a[i+1];
    a[i+1] = a[high];
    a[high] = temp2;

    return i + 1;
}


-------------------------------------------------------------

// Descending Order

#include <stdio.h>

void quick_sort (int a[], int low, int high);
int partition (int a[], int low, int high);

void main()
{
    int n;
    printf ("Enter the size of the array:\n");
    scanf ("%d",&n);

    int a[n], i;

    printf ("Enter the elements to the array a[] :\n");
    for (i = 0; i < n; i++)
        scanf ("%d",&a[i]);

    printf ("Before Sorting : ");
    for (i = 0; i < n; i++)
        printf ("%d\t",a[i]);

    quick_sort (a, 0, n - 1);

    printf ("\nAfter Sorting : ");
    for (i = 0; i < n; i++)
        printf ("%d\t",a[i]);
}

void quick_sort (int a[], int low, int high)
{
    if (low >= high)
        return;

    else
    {
        int pivot_position = partition (a, low, high);
        quick_sort (a, low, pivot_position - 1);
        quick_sort (a, pivot_position + 1, high);
    }
}

int partition (int a[], int low, int high)
{
    int pivot = a[high];
    int i = low - 1;
    int j, temp1, temp2;

    for (j = low; j <= high - 1; j++)
    {
        if (a[j] >= pivot)
        {
            i = i + 1;
            temp1 = a[i];
            a[i] = a[j];
            a[j] = temp1;
        }
    }

    temp2 = a[i+1];
    a[i+1] = a[high];
    a[high] = temp2;

    return i + 1;
}


