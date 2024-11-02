#include <iostream>

using namespace std;
int hieu(int a, int b){
	return a-b;
}
int tong(int a, int b)
{
	return a + b;
}
int tich(int a, int b);
float thuong(int a, int b);
int main()
{
	cout << "DAY LA CHUONG TRINH DE THUC HANH GIT";
	cout << tong(1,2);
	int a,b;
	cin >>a>>b;
	int x =hieu(a,b);
	cout <<"hieu la: "<< x ;
	system("pause");
	return 0;
}
