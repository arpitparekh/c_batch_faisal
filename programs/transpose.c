#include <stdio.h>

int main()
{

    printf("Enter the size of matrix\n");
    int m, n;
    scanf("%d%d", &m, &n);

    int arr[m][n];
    int transpose[n][m];

    printf("\nEnter Value in matrix : \n");

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("[%d][%d] => ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    printf("\nYour Matrix is below : \n");

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            transpose[j][i] = arr[i][j];
        }
        printf("\n");
    }

    printf("Your Transpose Matrix is below : \n");

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }
}