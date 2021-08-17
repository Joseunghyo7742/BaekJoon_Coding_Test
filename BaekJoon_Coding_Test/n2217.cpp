#include<iostream>
#include<algorithm> 
#include<vector>
//ทฮวม
using namespace std;
int main(void) {
	int n;
	cin >> n;
	int* rope = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> rope[i];
	}

	sort(rope, rope + n);

	int maxResult = 0;
	for (int i = 0; i < n; i++) {
		int temp = rope[i] * (n - i);
		if (temp >= maxResult)
			maxResult = temp;
	}
	cout << maxResult;

	
}

