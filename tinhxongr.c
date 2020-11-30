#include <stdio.h>
#include <string.h>
int main(){
	int n;
	int a = -1;
	int b = -1;
	int mangchan[n];
	int mangle[n];
	printf("Nhap phan tu cua mang: ");
	scanf("%d", &n);
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
	
}
