#include<iostream>
#include<cmath>
using namespace std;
//���谨��
int main(void) {
    int n; //������ ��
	int* a; // �� ������ �ο�
	int b, c; //���ð��� �ο�
	cin >> n;
	a = new int[n];
	int result = n;

	for (int i = 0; i < n; i++)
		cin >> a[i];

	cin >> b >> c;

	for (int i = 0; i < n; i++) {
		a[i] -= b;
		if (a[i] < 0) a[i] = 0;
		result += int(ceil((double)a[i] /(double) c));
	}
	cout << result;

}