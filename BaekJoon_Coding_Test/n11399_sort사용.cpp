#include<iostream>
#include<algorithm>
//sort ver
using namespace std;

int main(void) {
	int n;
	cin >> n;
	int* p = new int[n];
	int result = 0;
	for (int i = 0; i < n; i++)
		cin >> p[i];
	//�������� ����
	sort(p, p + n);
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)
			result += p[j];
	}
	cout << result;
}