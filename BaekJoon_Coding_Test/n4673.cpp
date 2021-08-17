#include<iostream>
using namespace std;
int Dn(int n) {
	int a = n / 10000;
	int b = n / 1000;
	int c = (n % 1000) / 100;
	int d = (n % 100) / 10;
	int e = (n % 10);
	int dn = a + b + c + d + e + n;
	return dn;
}
int main(void) {
	bool arr[10000] = { false };
	for (int i = 1; i <= 10000; i++) {
		int n = i;
		while (n <= 10000) {
			n = Dn(n);
			if (n <= 10000)
				arr[n - 1] = true;
			else
				continue;
		}
	}
	for (int j = 0; j < 10000; j++) {
		if (arr[j] == false)
			cout << j + 1<<endl;
	}
}
//¼¿ÇÁ³Ñ¹ö