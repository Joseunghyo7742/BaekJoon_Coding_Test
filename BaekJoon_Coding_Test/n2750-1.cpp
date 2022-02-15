#include<iostream>
using namespace std;

//������
void quickSort(int* arr, int start, int end) {
	if (start >= end)
		return;
	int pivot = start; //�ǹ��� ù ��° ����
	int left = start + 1;
	int right = end;
	while (left <= right) {
	//�ǹ����� ū �����͸� ã�� ������ �ݺ�
		while (left <= end && arr[left] <= arr[pivot])
			left++;
		while (right > start && arr[right] >= arr[pivot])
			right--;
		if (left > right) //�����ȴٸ� ���� �����Ϳ� �ǹ��� ��ü
		{
			int temp = arr[right];
			arr[right] = arr[pivot];
			arr[pivot] = temp;
		}
		else { //�������� �ʾҴٸ� ���� �����Ϳ� ū �����͸� ��ü
			int temp = arr[left];
			arr[left] = arr[pivot];
			arr[pivot] = temp;
		}
	}	
	quickSort(arr, start, right - 1);
	quickSort(arr, right + 1, end);
}

int main(void) {
	int n;
	cin >> n;
	int* arr = new int[n];
	for (int i=0; i < n; i++) {
		cin >> arr[i];
	}
	quickSort(arr, 0, n - 1);

	for (int j=0; j < n; j++) {
		cout << arr[j];
		if (j != n - 1) {
			cout << endl;
		}
	}
}
