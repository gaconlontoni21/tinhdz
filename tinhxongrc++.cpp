
#include <iostream>
using namespace std;
int main(){
	int n;
	int a = -1;
	int b = -1;
	cout << "Nhap phan tu cua mang: ";
	cin >> n;
	int mangchan[n];
	int mangle[n];
	int arr[n];
	for (int i = 0; i < n; i++){
		cout << "Nhap phan tu arr[" << i << "]: ";
		cin >> arr[i];
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
		cout << "Arr[" << i << "]: " << mangle[i] << "\t";
	}
	
}
