#include<iostream>
using namespace std;
int main(void) {
	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		int n;
		cin >> n;
		int result = n;
		int* doc_score = new int[n];
		int* interview = new int[n];
		for (int j = 0; j < n; j++) {
			cin >> doc_score[j];
			cin >> interview[j];
		}
		for (int p = 0; p < n; p++) {
			for (int q = 0; q < n; q++) {
				if (doc_score[p] > doc_score[q]) {
					if (interview[p] > interview[q]) n--;
				}
			}
		}
		cout << result<<endl;
	}

}