#include<iostream>
using namespace std;

//퀵정렬
void quickSort(int* arr, int start, int end) {
	if (start >= end)
		return;
	int pivot = start; //피벗은 첫 번째 원소
	int left = start + 1;
	int right = end;
	while (left <= right) {
	//피벗보다 큰 데이터를 찾을 때까지 반복
		while (left <= end && arr[left] <= arr[pivot])
			left++;
		while (right > start && arr[right] >= arr[pivot])
			right--;
		if (left > right) //엇갈렸다면 작은 데이터와 피벗을 교체
		{
			int temp = arr[right];
			arr[right] = arr[pivot];
			arr[pivot] = temp;
		}
		else { //엇갈리지 않았다면 작은 데이터와 큰 데이터를 교체
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
