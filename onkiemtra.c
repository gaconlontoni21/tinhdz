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
	printf("Lop: ");
	gets(claz);;
	printf("MSSV: ");
	gets(MSSV);
	printf("Ho & Ten: ");
	gets(name);
	for (int i = 0; i < 33*2+strlen(length); i++){
		printf("-");
	}
	for (int j = 0; j < size; j++){
		printf("%d. Cau %d (Nhap %d) - %s\n", j + 1, j + 2, j + 1, arr[j]);
	}
	// giai phong bo nho
	free(claz);
	free(MSSV);
	free(name);
}

//void nhapstt(){
//	int n;
//	int arr[5] = {1, 2 ,3 , 4 ,5};
//	int size = sizeof(arr)/sizeof(arr[0]);
//	printf("Chon chuong trinh de chay (nhap so thu tu): ");
//	scanf("%d", &n);
//}

int main(){
	cau1();
	getch();
}
