#include<iostream>
using namespace std;
//dfs
int m, n, k;
int** farm;

//�����¿�
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
		//2���� �迭 ����, �׵θ� ���� ����
		farm = new int* [n + 2];
		for (int i = 0; i < n+2; i++) {
			farm[i] = new int[m + 2]{ 0, };
		}
		//�ֹ��� ��ġ ��ǥ �ޱ� 
		for (int j = 0; j < k; j++) {
			int x, y;
			cin >> x >> y;
			farm[y+ 1][x + 1] = 1;
		}
		//�ּ� �ֹ��� �������ϱ�
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