#include <stdio.h>

int bSearch(int a[], int low, int high, int key);

void main()
{
    int n;
    printf ("Enter the size of the array :\n");
    scanf ("%d", &n);

    int a[n];
    int i, key;

    printf ("Enter the elements to the array a[]:\n");
    for (i = 0; i < n; i++)
        scanf ("%d", &a[i]);

    printf ("The elements are: ");
    for (i = 0; i < n; i++)
        printf ("%d\t", a[i]);

    printf("\nEnter value to find: \n");
    scanf("%d", &key);

    int result = bSearch(a, 0, n-1, key);

    (result == -1)? printf("%d is not present in array.\n", key)
                    : printf("%d is present at index %d.\n", key, result);
}
int bSearch(int a[], int low, int high, int key)
{
    int mid;

    while (low <= high)
    {
        mid = low + (high - low)/2;

        if (key == a[mid])
            return mid;

        else if (key < a[mid])
            high = mid - 1;

        else
            low = mid + 1;
    }
    return -1;
}

