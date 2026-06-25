#include <stdio.h>

int main()
{
    int arr[5] = {15, 8, 25, 12, 30};
    int *ptr = arr;
    int largest = *ptr;

    for(int i = 1; i < 5; i++)
    {
        if(*(ptr + i) > largest)
        {
            largest = *(ptr + i);
        }
    }

    printf("Largest Element = %d", largest);

    return 0;
}