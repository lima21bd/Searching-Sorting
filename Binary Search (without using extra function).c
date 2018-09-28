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

