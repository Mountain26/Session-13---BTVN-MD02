#include <stdio.h>

void makeMatrix(int arr[100][100], int n, int k){
    for (int i = 0; i < n; i++){
        for (int j = 0; j < k; j++){
            printf("arr[%d][%d] là: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    printf("Gia tri cua cac phan tu trong mang la:\n");
    for (int i = 0; i < n; i++){
        for (int j = 0; j < k; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

int main(){
    int n, k;
    int arr[100][100];
    
    
    printf("Moi ban nhap so hang cua mang: ");
    scanf("%d", &n);
    printf("Moi ban nhap so cot cua mang: ");
    scanf("%d", &k);

    makeMatrix(arr, n, k);

    return 0;
}

