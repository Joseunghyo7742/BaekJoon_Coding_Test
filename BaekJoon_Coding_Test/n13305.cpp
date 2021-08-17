#include<iostream>

using namespace std;

int main(void) {
	int n;
	cin >> n;
	long * distance = new long[n - 1];
	long * cost = new long[n];
	//입력
	for (int i = 0; i < n - 1; i++) {
		cin >> distance[i];
	}
	for (int i = 0; i < n; i++) {
		cin >> cost[i];
	}
	long min = 1000000000;
	long total_cost = 0;
	//최소값 찾기
	for (int j = 0; j < n-1; j++) {
		if (cost[j] <= min)
			min = cost[j];
		total_cost += min * distance[j];
	}
	cout << total_cost;
	
}