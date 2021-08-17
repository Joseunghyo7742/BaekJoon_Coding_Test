#include<iostream>
#include<cmath>
using namespace std;
int main(void) {
    int n; //시험장 수
	int* a; // 각 시험장 인원
	int b, c; //감시가능 인원
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