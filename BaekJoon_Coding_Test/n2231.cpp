#include<iostream>
#include<cstring>
using namespace std;

//������ = ������ + �� �ڸ� �� �� ���� �ּ� �����ڸ� ����� ���ؼ� �� �ڸ� ���� ���� �ִ밡 �Ǿ����.
int main(void) {
	int n;
	int cnt = 0;
	cin >> n;
	int temp = n;
	//n�� �ڸ��� ���ϱ� -> 10���� �ݺ��ؼ� ������ ��� ������ 0�� �Ǵ��� ���ϱ�
	while (temp) {
		temp/=10;
		cnt++;
	}

	int start = n - cnt * 9;

	char s[10];
	long sum = 0;
	bool find = false;

	for (long i=start; i < n; i++) {
		sum = i;
		sprintf(s, "%ld", i); //s���ڿ��� ���ڿ� i�� �����
		for (int j = 0; j < (unsigned)strlen(s); j++)
			sum += s[j] - '0';
		if (sum == n) {
			find = true;
			cout << i;
			break;
		}

	}
	if (find == false) {
		cout << "0";
	}
	return 0;
}