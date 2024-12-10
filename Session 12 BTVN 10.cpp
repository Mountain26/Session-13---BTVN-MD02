#include <stdio.h>

void addAllItem(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("Phan tu thu arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }
}

void showItems(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("Phan tu thu arr[%d]: %d\n", i, arr[i]);
    }
}

void addItem(int valueItem, int index, int &size, int arr[]) {
    for (int i = size; i > index; i--) {
        arr[i] = arr[i - 1];
    }
    arr[index] = valueItem;
    size++;
    printf("Mang sau khi da chen la: \n");
    for (int i = 0; i < size; i++) {
        printf("%d\t", arr[i]);
    }
}

void changeItem(int arr[], int size, int index, int value) {
    arr[index] = value;
    for (int i = 0; i < size; i++) {
        printf("%d\t", arr[i]);
    }
}

void deleteItem(int arr[], int &size, int index) {
    for (int i = index; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }
    size--;
    for (int i = 0; i < size; i++) {
        printf("%d\t", arr[i]);
    }
}

void arrangeItema_z(int arr[], int size, int temp) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < size; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }
}

void arrangeItemz_a(int arr[], int size, int temp) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] < arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < size; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }
}

int linearSearch(int arr[], int size, int valueItem, int flag) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == valueItem) {
            flag = 1;
            printf("Phan tu %d nam o vi tri %d", valueItem, i);
            return 0;
        }
    }
    if (flag == -1) {
        printf("Phan tu %d khong ton tai trong mang", valueItem);
    }
    return -1;
}

int binarySearch(int arr[], int start, int end, int mid, int valueItem) {
    while (start <= end) {
        mid = (start + end) / 2;
        if (arr[mid] == valueItem) {
            printf("Phan tu %d co o trong mang va o vi tri %d", valueItem, mid);
            return 1;
        } else if (arr[mid] > valueItem) {
            end = mid - 1;
        } else {
            start = mid + 1;
        }
    }
    printf("Phan tu %d khong ton tai trong mang", valueItem);
    return 0;
}

int main() {
    int choose;
    int command;
    int option;
    int arr[100];
    int size = 0;
    int valueItem;
    int index;
    int value;
    int flag = -1;
    
    do {
        printf("\nMenu\n");
        printf("1. Nhap so phan tu va gia tri cho mang\n");
        printf("2. In ra gia tri cac phan tu trong mang\n");
        printf("3. Them mot phan tu vao vi tri ban chi dinh o trong mang\n");
        printf("4. Sua mot phan tu o vi tri chi dinh\n");
        printf("5. Xoa phan tu tai mot vi tri cu the\n");
        printf("6. Sap xep mang theo thu tu\n");
        printf("7. Tim kiem xem phan tu co ton tai trong mang hay khong\n");
        printf("8. Thoat chuong trinh\n");

        printf("Moi ban chon chuong trinh ban muon: ");
        scanf("%d", &choose);

        switch (choose) {
            case 1:
                printf("Moi ban nhap so phan tu co trong mang: ");
                scanf("%d", &size);
                addAllItem(arr, size);
                break;
            case 2:
                showItems(arr, size);
                break;
            case 3:
                printf("Moi ban nhap gia tri muon chen: ");
                scanf("%d", &valueItem);
                printf("Moi ban nhap vi tri muon chen: ");
                scanf("%d", &index);
                addItem(valueItem, index, size, arr);
                break;
            case 4:
                printf("\n");
                printf("Moi ban nhap gia tri can them vao: ");
                scanf("%d", &value);
                printf("Moi ban nhap vi tri can sua: ");
                scanf("%d", &index);
                changeItem(arr, size, index, value);
                break;
            case 5:
                printf("Moi ban nhap vi tri can xoa: ");
                scanf("%d", &index);
                deleteItem(arr, size, index);
                break;
            case 6:
                printf("1. Tang dan\n2. Giam dan\n");
                printf("Moi ban chon yeu cau 1 hoac yeu cau 2: ");
                scanf("%d", &option);
                int temp;
                switch (option) {
                    case 1:
                        arrangeItema_z(arr, size, temp);
                        break;
                    case 2:
                        arrangeItemz_a(arr, size, temp);
                        break;
                    default:
                        printf("Lua chon khong hop le\n");
                        break;
                }
                break;
            case 7:
                printf("1. Tim kiem tuyen tinh\n2. Tim kiem nhi phan\n");
                printf("Moi ban chon yeu cau 1 hoac yeu cau 2: ");
                scanf("%d", &command);
                switch (command) {
                    case 1:
                        printf("Moi ban nhap vao gia tri can tim o trong mang\n");
                        scanf("%d", &valueItem);
                        linearSearch(arr, size, valueItem, flag);
                        break;
                    case 2:
                        printf("Moi ban nhap vao gia tri can tim o trong mang\n");
                        scanf("%d", &valueItem);
                        binarySearch(arr, 0, size - 1, 0, valueItem);
                        break;
                    default:
                        printf("Lua chon khong hop le\n");
                        break;
                }
                break;
            case 8:
                printf("Thoat khoi chuong trinh\n");
                break;
            default:
                printf("Lua chon khong hop le, vui long chon lai\n");
                break;
        }
    } while (choose != 8);

    return 0;
}
