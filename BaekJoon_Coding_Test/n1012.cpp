#include<iostream>
using namespace std;
//dfs
int m, n, k;
int** farm;

//상하좌우
int dx[4] = { 0,0,-1,1 };
int dy[4] = { -1,1,0,0};
void dfs(int y, int x) {
	for (int i = 0; i < 4; i++) {
		int new_y = y + dy[i];
		int new_x = x + dx[i];
		if (farm[new_y][new_x] == 1) {
			farm[new_y][new_x] = 0;
			dfs(new_y, new_x);
		}
	}
}

int main(void) {
	int T;
	cin >> T;
	for (int i = 0; i < T; i++)
	{
		int result = 0;
		cin >> m >> n >> k;
		//2차원 배열 생성, 테두리 같이 생성
		farm = new int* [n + 2];
		for (int i = 0; i < n+2; i++) {
			farm[i] = new int[m + 2]{ 0, };
		}
		//애벌레 위치 좌표 받기 
		for (int j = 0; j < k; j++) {
			int x, y;
			cin >> x >> y;
			farm[y+ 1][x + 1] = 1;
		}
		//최소 애벌레 개수구하기
		for (int i = 0; i < n+2; i++) {
			for (int j = 0; j < m+2; j++) {
				if (farm[i][j] == 1) {
					farm[i][j] = 0;
					dfs(i, j);
					result += 1;
				}
			}
		}
		cout << result<<endl;
	}
}