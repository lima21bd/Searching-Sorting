#include <stdio.h>

void merge_sort (int a[], int low, int high);
void merge(int a[], int low, int mid, int high);

int main()
{
    int a[100], n, i;

    printf ("How many elements do you want?\n");
    scanf ("%d", &n);

    printf ("Enter the elements to the array a[] : \n");
    for (i = 0; i < n; i++)
        scanf ("%d", &a[i]);

    printf ("Before Sort : ");
    for (i = 0; i < n; i++)
        printf ("%d\t", a[i]);

    merge_sort (a, 0, n-1);

    printf ("\nAfter Sort : ");
    for (i = 0; i < n; i++)
        printf ("%d\t", a[i]);

    return 0;
}

void merge_sort (int a[], int low, int high)
{
    int mid;

    if (low >= high)
        return;

    if (low < high)
    {
        mid = low + (high - low) / 2 ;

        merge_sort (a, low, mid);
        merge_sort (a, mid + 1, high);

        merge (a, low, mid, high);
    }
}

/* Below function merges two sub arrays of a[].
First sub array is a[low..mid].
Second sub array is a[mid+1..high]. */

void merge(int a[], int low, int mid, int high)
{
    // Declare temporary arrays
    int L[100], R[100];

    int n1, n2, i, j, k;

    n1 = mid - low + 1; /* why are we adding 1? for instance, when low = 0
                           & mid = 3 n1 = 3-0 = 3 but the next loop should
                           move 4 times. That's why we added 1. */
    n2 = high - mid;

    // Copy data to temporary arrays L[] and R[]
    for (i = 0; i < n1; i++)
        L[i] = a[low + i];

    for (j = 0; j < n2; j++)
        R[j] = a[mid + 1 + j];

    /* Merge the temp arrays back into a[low....high]*/
    i = 0; // Initial index of first sub array
    j = 0; // Initial index of second sub array
    k = low; // Initial index of merged sub array

    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            a[k] = L[i];
            i++;
        }
        else
        {
            a[k] = R[j];
            j++;
        }
        k++;
    }

    /* Copy the remaining elements of L[], if there
       are any */
    while (i < n1)
    {
        a[k] = L[i];
        i++;
        k++;
    }

    /* Copy the remaining elements of R[], if there
       are any */
    while (j < n2)
    {
        a[k] = R[j];
        j++;
        k++;
    }
}

