#include <stdio.h>

int main()
{
    int n, a[100], i, j, temp;

    printf ("How many elements do you want?\n");
    scanf ("%d", &n);

    printf ("Enter the elements to the array a[] :\n");
    for (i = 0; i < n; i++)
        scanf ("%d", &a[i]);

    printf ("Before Sorting : ");
    for (i = 0; i < n; i++)
        printf ("%d\t", a[i]);

    for (i = 1; i < n; i++)
    {
        for (j = 0; j < n - i; j++)
        {

            if (a[j] > a[j+1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    printf ("\nAfter Sorting : ");
    for (i = 0; i < n; i++)
        printf ("%d\t", a[i]);

    return 0;
}
