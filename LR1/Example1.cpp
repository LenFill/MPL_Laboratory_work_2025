/*������������ �� ���������� ��������� �� ����� C++.��� ����� ��������� ��������� ���������� ����� 2 � ������� 
* �������������� ��������� ���, ����� ����������� ������� � ����� ����������.
*/
#include <iostream>
#include <cstdlib>
using namespace std;
int power(int x, int n) {
	int i, p = 1;
	for (i = 0; i < n;i++) {
		p *= x;		
	}
	return p;
}
int enterNum() {
	int num;
	cout << "������� ��������� ��� ���������� ��������: ";
	cin >> num;
	return num;
}
int main() {
	system("chcp 1251>nul");
	
	int i, k;
	int num = enterNum();
	int power(int, int);
	for (i = 0; i < 10; i++) {
		k = power(num, i);
		cout << "i = "<<i<<", k = "<<k<<endl;
	}
	system("pause>nul");
}