#include<iostream>

using namespace std;

int main(void) {
	int n; //사람 수.
	cin >> n;
	int* weight = new int[n]; //몸무게
	int* height = new int[n];//키
	int* result = new int[n]; //덩치 랭킹

	for (int i = 0; i < n; i++)
		cin >> weight[i] >> height[i];

	//비교
	for (int i = 0; i < n; i++) {
		int k = 1; //덩치 큰 사람 카운트
		for (int j = 0; j < n; j++) {
			if (i!=j && weight[i] < weight[j] && height[i] < height[j]) {
				
				k++;
			}
		}
		result[i] = k;
	}
	
	//출력
	for (int i = 0; i < n; i++) {
		cout << result[i];
		if (i != n - 1)
			cout << " ";
	}	

}