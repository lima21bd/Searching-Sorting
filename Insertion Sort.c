#include <stdio.h>

int main()
{
    int n, a[100], i, temp, j;

    printf ("How many elements do you want :\n");
    scanf ("%d",&n);

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

    return 0;
}
