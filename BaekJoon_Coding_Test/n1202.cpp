#include<iostream>
using namespace std;
int main(void) {
	int n, k; //n ��������, k ���氳��
	cin >> n >> k;
	int* m = new int[n]; //������ ����
	int* v = new int[n];//������ ����
	int* c = new int[k];//���濡 ���� �� �ִ� �ִ빫��
	
	//���� ���� �Է�
	for (int i = 0; i < n; i++) {
		cin >> m[i] >> v[i];
	}
	//���� �ִ빫�� ���� �Է�
	for (int i = 0; i < k; i++) {
		cin >> c[i];
	}
	
}