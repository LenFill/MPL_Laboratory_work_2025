#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
	system("chcp 1251>nul");
	int a = 2, b = 5;
	void obmen1(int, int);
	void obmen2(int*, int*);
	void obmen3(int&, int&);
	cout << "�� ������: a = "<< a << " b = "<< b<< endl;
	obmen1(a, b);
	cout << "����� ������ 1: a = " << a << " b = " << b << endl;
	obmen2(&a, &b);
	cout << "����� ������ 2: a = " << a << " b = " << b << endl;
	obmen3(a, b);
	cout << "����� ������ 3: a = " << a << " b = " << b << endl;
	system("pause >nul");
	return 0;	
}
void obmen1(int x, int y) {
	int num = x;
	x = y;
	y = num;
}
void obmen2(int* x, int* y) {
	int num = *x;
	*x = *y;
	*y = num;
}
void obmen3(int& x, int& y) {
	int num = x;
	x = y;
	y = num;
}