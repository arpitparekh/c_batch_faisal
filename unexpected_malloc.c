#include <stdio.h>
#include <stdlib.h>

int main()
{

    int *ptr = (int *)malloc(10 * sizeof(int));
    int *duplicate = ptr;


    

    // for (int i = 0; i < 10; i++)  // 0..9
    // {
    //     *ptr = i;
    //     ptr++;
    // }

    for (int i = 0; i < 20; i++)
    {
        printf("%d\n", *duplicate);
        duplicate++;
    }

    free(ptr);

    return 0;
}