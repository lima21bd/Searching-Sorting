#include <stdio.h>

void main()
{
    int n;
    printf ("Enter the size of the array a[]: \n");
    scanf ("%d", &n);

    int a[n];
    int i, key, flag = 0;

    printf ("Enter the elements to the array a[]: \n");
    for (i = 0; i < n; i++)
        scanf ("%d", &a[i]);

    printf ("The elements are: ");
    for (i = 0; i < n; i++)
        printf ("%d\t", a[i]);

    printf ("\nEnter a key for searching:\n");
    scanf ("%d", &key);

    for (i = 0; i < n; i++)
    {
        if (a[i] == key)
        {
            flag = 1;
            break;
        }
    }

    if (flag == 1)

        printf("\n%d is located at position %d", key, i + 1);

    else
        printf("\n%d does not exist.", key);
}
