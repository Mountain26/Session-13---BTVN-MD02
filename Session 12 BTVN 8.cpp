#include <stdio.h>

int findUcln(int a, int b) {
    while (b != 0){
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int a, b;
    printf("Nhap hai so nguyen: ");
    scanf("%d %d", &a, &b);

    int result = findUcln(a, b);
    printf("Uoc chung lon nhat cua %d va %d la: %d\n", a, b, result);
    
    return 0;
}

