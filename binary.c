#include <stdio.h>
#include <stdlib.h>

int search(int a[], int n, int ele)
{
    int l = 0, r = n - 1;
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (a[mid] == ele)
        {
            return mid;
        }
        else if (ele < a[mid])
        {
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    return -1;
}

int main()
{
    int n;
    scanf("%d", &n);

    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Input array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    int ele;
    scanf("%d", &ele);

    int pos = search(a, n, ele);
    printf("The element %d is ", ele);
    if (pos != -1)
    {
        printf("present at position %d.\n", pos + 1);
    }
    else
    {
        printf("not found in the array.\n");
    }

    return 0;
}