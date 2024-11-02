#include <iostream>

using namespace std;
<<<<<<< HEAD
int tong(int a, int b);
int hieu(int a, int b){
	return a-b;
}
int tong(int a, int b)
{
	return a + b;
}
int hieu(int a, int b)
{
	return a*b;
}
int tich(int a, int b);
float thuong(int a, int b);
int main()
{
	cout << "DAY LA CHUONG TRINH DE THUC HANH GIT";
	int a,b;
	cin >>a>>b;
	int x =hieu(a,b);
	cout <<"hieu la: "<< x ;
	system("pause");
	return 0;
}
