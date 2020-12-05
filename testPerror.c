#include <stdio.h>
#include <stdlib.h>
typedef struct{
	int n1, n2, n3;
}threeNum;

int main(){
	int n;
	threeNum num;
	FILE * p1, * p2;
	p1 = fopen("D:\\program2.bin", "wb");
	if (p1 == NULL){
		perror("Error: ");
		exit(1);
	}
	for (int n = 1; n < 5; n++){
		num.n1 = n;
		num.n2 = n * 5;
		num.n3 = n * 5 + 1;
		fwrite(&num, sizeof(threeNum), 1, p1);
	}
	fclose(p1);
	p2 = fopen("D:\\program2.bin", "rb");
	for (int n = 1; n < 5; n++){
		fread(&num, sizeof(threeNum), 1, p2);
		printf("n1:%d n2:%d n3:%d\n", num.n1, num.n2, num.n3);
	}
	if (p2 == NULL){
		perror("Error: ");
		exit(1);
	}
	fclose(p2);
	return 0;
}
