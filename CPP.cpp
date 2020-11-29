#include <iostream>
#include <stdio.h>
using namespace std;

typedef struct{
	string name, id;
}student;

int main(){
	int n;
	cout << "so sv: ";
	cin >> n;
	student a[n];
	cout << "----------------------------\n";
	for (int i = 0; i < n; i++){
		fflush(stdin);
		cout << "Nhap thong tin sinh vien" << i+1 << ": "<<endl;
		cout << "Name: ";
		getline(cin, a[i].name);
		cout << "id: ";
		getline(cin, a[i].id);
	}
	for (int i = 0; i < n; i++){
		cout << "\n  "<<i+1 << "\t|" << a[i].name << "\t| " << a[i].id << endl;
	}
}
