#include <stdio.h>
int main(){
	int n;
	int a, b;
	a = b = -1;
	printf("Nhap phan tu cua mang: ");
	scanf("%d", &n);
	int* mangchan = (int*)malloc(n*sizeof(int));
	int* mangle = (int*)malloc(n*sizeof(int));
	int arr[n];
	for (int i = 0; i < n; i++){
		printf("Nhap arr[%d]: ", i);
		scanf("%d", &arr[i]);
	}
	for (int i = 0; i < n; i++){
		if (arr[i] % 2 != 0){
			a++;
			mangle[a] = arr[i];
		}else {
			b++;
			mangchan[b] = arr[i];
		}
	}
	for (int i = 0; i <= b; i++){
		mangle[a+1+i] = mangchan[i];
	}
	for (int i = 0; i < n; i++){
		printf("Arr[%d]: %d\t", i, mangle[i]);	
	}
	free(mangchan);
	free(mangle);
}
