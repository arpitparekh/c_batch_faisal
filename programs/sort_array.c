#include <stdio.h>

int main()
{

    // sorting of an araay

    int arr[] = {1, 32, 7, 9, 6, 3, 65, 89};

    // 34 77 1 3 8 99
    // 1 77 34 3 8 99

    for (int i = 0; i < 8; i++)
    {

        for (int j = i + 1; j < 8; j++)
        {

            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    for (int i = 0; i < 8; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}