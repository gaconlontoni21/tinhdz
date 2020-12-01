#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#define malloc() (char*)malloc(30*sizeof(char*))

typedef struct{
	char name[30];
	char color[30];
} Struct;

void cau1(){
	// Cap phat bo nho dong
	char * claz = malloc();
	char * MSSV = malloc();
	char * name = malloc();
	char * length = "Mac Dinh Cau 1";
	char * arr[] = {"MANG", "CAU TRUC", "CHUOI", "DE QUY"};
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

void cau3(){
	int n;
	printf("Nhap so luong laptop: ");
	scanf("%d", &n);
	Struct laptop[n];
	for (int i = 0; i < n; i++){
		fflush(stdin);
		printf("\nNhap ten cua laptop %d: ", i+1);
		gets(laptop[i].name);
		printf("Nhap mau cua laptop %d: ", i+1);
		gets(laptop[i].color);
	}
	system("cls");
	for (int i = 0; i < n; i++){
		printf("\nLaptop thu %d: ", i+1);
		printf("\nTen: %s", laptop[i].name);
		printf("\nMau: %s", laptop[i].color);
	}
}

void nhapstt(){
	int n;	
	do{
		printf("\nChon chuong trinh de chay (nhap so thu tu): ");
		scanf("%d", &n);
	}while(n > 4 || n < 0);
	switch (n){
		case 0:{
			cau3();
			break;
		}
		case 1:{
			cau2();
			break;
		}
		case 2:{
			cau3();
			break;
		}
//		case 3:{
//			cau4();
//			break;
//		}
//		case 4:{
//			cau5();
//			break;
//		}
		
		
	}
}

int main(){
	cau1();
	nhapstt();
	getch();
}
