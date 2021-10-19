#include<iostream>
#include<cstring>
using namespace std;

//분해합 = 생성자 + 각 자리 수 합 따라서 최소 생성자를 만들기 위해서 각 자리 수의 합이 최대가 되어야함.
int main(void) {
	int n;
	int cnt = 0;
	cin >> n;
	int temp = n;
	//n의 자릿수 구하기 -> 10으로 반복해서 나눠서 몇번 나누면 0이 되는지 구하기
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
		sprintf(s, "%ld", i); //s문자열에 문자열 i가 저장됨
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