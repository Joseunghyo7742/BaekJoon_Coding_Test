#include<iostream>
using namespace std;

int main(void) {
	int n;
	int count=0;
	cin >> n;
	if (n < 100)
		cout << n;
	else
	{
		for (int i = 100; i <= n; i++) {
			int a = i / 100;
			int b = (i % 100) / 10;
			int c = (i % 10);
			if ((a - b) == (b - c))
				count++;
		}
		cout << (count + 99);
	}

}