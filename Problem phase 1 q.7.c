#include<stdio.h>

int sum_ofelements(int arr[100][100], int m, int n) {
    int sum = 0;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            sum += arr[i][j];
        }
    }
    return sum;
}

int main() {
    int m, n;
    int arr[100][100];
    printf("Enter the number of rows and columns:");
    scanf("%d %d", &m, &n);

    printf("Enter the elements of 2D array:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    int totalSum = sum_ofelements(arr, m, n);
    printf("Sum of elements in the 2D array: %d\n", totalSum);
    
    return 0;
}