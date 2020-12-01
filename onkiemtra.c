#include <stdio.h>
#include <stdbool.h>
#include <string.h>

void cau1(){
	// Cap phat bo nho dong
	char * claz = (char*)malloc(30*sizeof(char*));
	char * MSSV = (char*)malloc(30*sizeof(char*));
	char * name = (char*)malloc(30*sizeof(char*));
	char * length = "Mac Dinh Cau 1";
	char* arr[] = {"MANG", "CAU TRUC", "CHUOI", "DE QUY"};
	int size = sizeof(arr)/sizeof(arr[0]);
	for (int i = 0; i < 2; i++){
		for (int j = 0; j < 33; j++){
			printf("-");
		}
		if (i == 1){
			continue;
		}
		printf("%s", length);
	}
	printf("\nLop: ");
	gets(claz);;
	printf("MSSV: ");
	gets(MSSV);
	printf("Ho & Ten: ");
	gets(name);
	for (int i = 0; i < 33*2+strlen(length); i++){
		printf("-");
	}
	for (int j = 0; j < size; j++){
		printf("\n%d. Cau %d (Nhap %d) - %s\n", j + 1, j + 2, j + 1, arr[j]);
	}
	// giai phong bo nho
	free(claz);
	free(MSSV);
	free(name);
}

void cau2(){
	int n;
	int sum = 0;
	printf("Nhap so phan tu: ");
	scanf("%d", &n);
	int arr[n];
	for (int i = 0; i < n; i++){
		sum += arr[i];
	}
	printf("Tong cac gia tri trong mang la: %d", sum);
}

void nhapstt(){
	int n;
	int arr[5] = {1, 2 ,3 , 4 ,5};
	int size = sizeof(arr)/sizeof(arr[0]);
	printf("\nChon chuong trinh de chay (nhap so thu tu): ");
	scanf("%d", &n);
	switch (n){
		case 2: {
			cau2();
			break;
		}
	}
}

int main(){
	cau1();
	nhapstt();
	getch();
}
