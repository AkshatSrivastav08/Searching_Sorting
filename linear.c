#include <stdio.h>
#include <stdlib.h>

int search(int a[], int n, int ele)
{
    for (int i = 0; i < n; i++)
    {
        if (ele == a[i])
        {
            return i;
        }
    }
    return -1; // return -1 if the element is not found
}

int main()
{
    int n;
    printf("No. of elements in an array:");
    scanf("%d", &n);

    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Your input array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    int ele;
    printf("\nEnter the element you want to search: ");
    scanf("%d", &ele);

    int pos = search(a, n, ele);
    if (pos != -1)
    {
        printf("Element found at position: %d", pos+1);
    }
    else
    {
        printf("Element not found in the array");
    }

    return 0;
}