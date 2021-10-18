#include<iostream>
using namespace std;
int main(void) {
	int n, k; //n 보석개수, k 가방개수
	cin >> n >> k;
	int* m = new int[n]; //보석의 무게
	int* v = new int[n];//보석의 가격
	int* c = new int[k];//가방에 담을 수 있는 최대무게
	
	//보석 정보 입력
	for (int i = 0; i < n; i++) {
		cin >> m[i] >> v[i];
	}
	//가방 최대무게 정보 입력
	for (int i = 0; i < k; i++) {
		cin >> c[i];
	}
	
}