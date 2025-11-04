#include <iostream>

using namespace std;
int tong(int a, int b);
int hieu(int a, int b);
int tich(int a, int b);
float thuong(int a, int b);
bool laSCP(int n);
int main()
{
	int arr[5] = [1,2,3,4,5,];
	cout << "DAY LA CHUONG TRINH DE THUC HANH GIT";
	cout<<"Nhap a: ";
	cin>>a;
	cout<<"Nhap b: ";
	cin>>b;
	cout<<"Tong ="<<tong(a,b)<<endl;
	cout<<"Hieu ="<<hieu(a,b)<<endl;
	cout<<"Tich ="<<tich(a,b)<<endl;
	cout<<"Tong chia het 3 va 5 ="<<tongChiaHet3va5(arr)<<endl;
	cout<<"Kiem tra so chinh phuong: \n";
	cout<< a << (laSCP(a) ? " la" : "khong la")<<" so chinh phuong\n";
	cout<< b << (laSCP(b) ? " la" : "khong la")<<" so chinh phuong\n";
	system("pause");
	return 0;
}
int tong(int a, int b){
	return a+b;
}
int tongChiaHet3va5(int a[]){
	int tong = 0;
	for(int i=0; i<5; i++){
		if(a[i]%3==0 && a[i]%5==0){
			tong+=a[i];
		}
	}
	
	return tong;
}
int hieu(int a, int b){
	return a-b;
}
int tich(int a, int b){
	return a*b;
}
bool laSCP(int n){
	if (n<0)
		return false;
	int can = sqrt(n);
	return can*can==n;
}