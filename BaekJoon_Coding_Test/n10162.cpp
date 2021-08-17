#include<iostream>
using namespace std;
int main(void) {
	const int button[3] = { 300, 60, 10 };
	int count[3] = { 0, };
	int T;
	cin >> T;
	while (1) {
		if (T % 10 != 0) {
			cout << -1;
			break;
		}
		else {
			for (int i = 0; i < 3; i++) {
				count[i] = T / button[i];
				T = T % button[i];
			}
			for (int i = 0; i < 3; i++) {
				cout << count[i]<< " ";
			}
			break;
		}
	}
}