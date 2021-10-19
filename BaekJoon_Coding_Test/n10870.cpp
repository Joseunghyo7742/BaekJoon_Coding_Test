#include<iostream>
using namespace std;

int fibonacci(int n) {
	if (n < 2)
		return n;
	return fibonacci(n - 1) + fibonacci(n - 2);
}

int main(void) {
	int n;
	cin >> n;
	int result=fibonacci(n);
	cout << result;
		
}