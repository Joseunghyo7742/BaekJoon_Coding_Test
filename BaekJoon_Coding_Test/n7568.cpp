#include<iostream>

using namespace std;

int main(void) {
	int n; //��� ��
	cin >> n;
	int* weight = new int[n]; //������
	int* height = new int[n];//Ű
	int* result = new int[n]; //��ġ ��ŷ

	for (int i = 0; i < n; i++)
		cin >> weight[i] >> height[i];

	//��
	for (int i = 0; i < n; i++) {
		int k = 1; //��ġ ū ��� ī��Ʈ
		for (int j = 0; j < n; j++) {
			if (i!=j && weight[i] < weight[j] && height[i] < height[j]) {
				
				k++;
			}
		}
		result[i] = k;
	}
	
	//���
	for (int i = 0; i < n; i++) {
		cout << result[i];
		if (i != n - 1)
			cout << " ";
	}	

}