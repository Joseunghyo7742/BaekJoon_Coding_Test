//ATM
#include<iostream>
using namespace std;
int main(void) {
	int n;
	cin >> n;
	int* p = new int[n];
	int result = 0;
	for (int i = 0; i < n; i++)
		cin >> p[i];
	//�������� ����
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n - i-1; j++) {
			if (p[j] > p[j + 1]) {
				int temp = p[j];
				p[j] = p[j + 1];
				p[j + 1] = temp;
			}
		}
	}
	//�ּ� �ð� ���ϱ�
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)
			result += p[j];
	}
	cout << result;
}