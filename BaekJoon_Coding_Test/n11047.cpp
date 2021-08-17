#include<iostream>
using namespace std;

int main(void) {
	int n, k;
	cin >> n;
	cin >> k;
	int* arr = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	int result = 0;
	for (int i = n-1; i >=0; i--) {
		if (k <= 0)
			break;
		result += k / arr[i];
	
		k = k % arr[i];
	}
	cout << result;
}