#include <iostream>

using namespace std;
int tong(int a, int b);
int hieu(int a, int b);
int tich(int a, int b);
float thuong(int a, int b);
bool laSCP(int n);
int main()
{
	cout << "DAY LA CHUONG TRINH DE THUC HANH GIT";
	cout<<"Nhap a: ";
	cin>>a;
	cout<<"Nhap b: ";
	cin>>b;
	cout<<"Tong =";
	cout<<"Hieu ="<<hieu(a,b)<<endl;
	cout<<"Tich ="<<tich(a,b)<<endl;
	cout<<"Kiem tra so chinh phuong: \n";
	cout<< a << (laSCP(a) ? " la" : "khong la")<<" so chinh phuong\n";
	cout<< b << (laSCP(b) ? " la" : "khong la")<<" so chinh phuong\n";
	system("pause");
	return 0;
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