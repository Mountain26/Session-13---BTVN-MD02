#include<stdio.h>

void printfMatrix(int n, int k, int arr[100][100]){
	for (int i = 0; i < n; i++){
        		for (int j = 0; j < k; j++){
            	printf("%d ", arr[i][j]);
        }
        	printf("\n");
    }
}
void printfCorners(int n, int k, int arr[100][100]) {
    printf("Gia tri cua cac phan tu o cac goc la:\n");
    
    printf("%d ",arr[0][0]);
    if (k > 1){
        printf("%d ", arr[0][k-1]);
    }
    printf("\n");
    if (n > 1){
        printf("%d ",arr[n-1][0]);
        if (k > 1) {
            printf("%d ",arr[n-1][k-1]);
        }
    }
    printf("\n");
}
void printfDuongbien(int n, int k, int arr[100][100]) {
    printf("Gia tri cua cac phan tu nam tren duong bien la:\n");
    for (int j = 0; j < k; j++) {
        printf("%d ", arr[0][j]);
    }
    for (int i = 1; i < n - 1; i++) {
        printf("%d ", arr[i][k - 1]);
    }
    if (n > 1) {
        for (int j = k - 1; j >= 0; j--) {
            printf("%d ", arr[n - 1][j]);
        }
    }
    if (k > 1) {
        for (int i = n - 2; i > 0; i--) {
            printf("%d ", arr[i][0]);
        }
    }
    printf("\n");
}
void printfDuongcheo(int n, int k, int arr[100][100]) {
    printf("Gia tri cua cac phan tu nam tren duong cheo chinh la:\n");
    for (int i = 0; i < n && i < k; i++) {
        printf("%d ", arr[i][i]);
    }
    printf("\n");
    
    printf("Gia tri cua cac phan tu nam tren duong cheo phu la:\n");
    for (int i = 0; i < n && i < k; i++) {
        printf("%d ", arr[i][k - i - 1]);
    }
    printf("\n");
}
int main(){
	int i,n,k; 
	int sum = 0; 
	int option;
	int phepNhan;
	int arr[100][100];
	
	
	do{
        printf("\nMenu\n");
        printf("1: Nhap gia tri cac phan tu cua mang\n");
        printf("2: In ra gia tri cac phan tu cua mang theo ma tran\n");
        printf("3: In ra gia tri cac phan tu o goc theo ma tran\n");
        printf("4: In ra cac phan tu nam tren duong bien ma tran\n");
        printf("5: In ra cac phan tu nam tren duong cheo chinh va cheo phu theo ma tran\n");
        printf("6: In ra cac phan tu la so nguyen to theo ma tran\n");
        printf("7: Thoat\n");
        
        
    	printf("Moi ban chon chuong trinh ban muon: ");
        scanf("%d", &option);
        switch(option){
        	case 1:
        	printf("Moi ban nhap so hang cua mang:");
    		scanf("%d", &n);
    		printf("Moi ban nhap so cot cua mang:");
    		scanf("%d", &k);

    		for(int i = 0; i < n; i++) {
        	for(int j = 0; j < k; j++){
            printf("arr[%d][%d] la: ", i, j);
            scanf("%d",	&arr[i][j]); 
        }
    }
    		break;
			case 2:
    		printfMatrix(n, k, arr);
    		break;
			case 3:
			printfCorners(n, k, arr);
			break;
			case 4:
			printfDuongbien(n, k, arr);
        	break; 
        	case 5:
            printfDuongcheo(n, k, arr);
            break;
            case 6:
        	break;
			case 7:
			printf("Ban da thoat khoi chuong trinh\n");
            break;
            default:
            printf("Chuong trinh khong hop le\n");
        	break;
        }
    }while(option != 7);

    return 0; 
}  

			 
			 
        	
			 
			 
			 

