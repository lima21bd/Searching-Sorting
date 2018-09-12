#include <stdio.h>

int main()
{
    int n, a[100], i, min, j, temp;

    printf ("How many elements do you want?\n");
    scanf ("%d", &n);

    printf ("Enter the elements to the array a[] :\n");
    for (i = 0; i < n; i++)
        scanf ("%d", &a[i]);

    printf ("Before Sorting : ");
    for (i = 0; i < n; i++)
        printf ("%d\t", a[i]);

    for (i = 0; i < n; i++)
    {
        min = i;
        for (j = i + 1; j < n; j++)
        {
            if (a[j] < a[min])
            {
                min = j;
            }
        }

        temp = a[i];
        a[i] = a[min];
        a[min] = temp;
    }

    printf ("\nAfter Sorting : ");
    for (i = 0; i < n; i++)
        printf ("%d\t", a[i]);

    return 0;
}
