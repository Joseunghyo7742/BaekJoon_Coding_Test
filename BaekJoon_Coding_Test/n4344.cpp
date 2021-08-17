#include<iostream>
#include<cmath>

//평균은넘겠지
using namespace std;
int main(void) {
	int c;
	cin >>c;
	for (int i = 0; i < c; i++) {
		int n=0;
		double mean=0;
		double count = 0;
		double result=0;
		cin >> n;
		int* scores = new int[n];
		for (int j = 0; j < n; j++) {
			cin >> scores[j];
			mean += scores[j];
		}
		mean /= n;
		for (int k = 0; k < n; k++) 
			if (scores[k] > mean) count++;
		result = round(count / (double)n * 100*1000)/1000;
		cout << fixed;
		cout.precision(3);
		cout << result <<"%"<< endl;
	}
}