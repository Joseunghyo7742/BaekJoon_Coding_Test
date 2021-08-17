#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int** ractangular;
int m, n;
int num = 0;
int dx[4] = { 0,1,0,-1 };
int dy[4] = { -1,0,1,0 };
vector<int> result;
//영역구하기
void dfs(int y, int x) {
	for (int i = 0; i < 4; i++) {
		int new_m = y + dy[i];
		int new_n = x + dx[i];
		if (new_m < 0 || new_n < 0 || new_m >= m || new_n >= n) 
			continue;
		if (ractangular[new_m][new_n] == 0) {
			ractangular[new_m][new_n] = 1;
			num++;
			dfs(new_m, new_n);
		}
	}
}


int main(void) {
	int  k;
	cin >> m >> n >> k;
	ractangular = new int* [m];
	for (int i = 0; i < m; i++)
		ractangular[i] = new int[n] {0, };

	for (int j = 0; j < k; j++) {
		int lx, ly, rx, ry;
		cin >> lx >> ly >> rx >> ry;
		for (int i = ly; i < ry; i++) {
			for (int j = lx; j < rx; j++)
				ractangular[i][j] = 1;
		}
	}
	
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (ractangular[i][j] == 0) {
				num++;
				ractangular[i][j] = 1;
				dfs(i, j);
				result.push_back(num);
				num = 0;
			}
			
		}
	}
	sort(result.begin(), result.end());
	cout << result.size()<<endl;
	for (int i = 0; i < result.size(); i++)
		cout << result[i]<<" ";
	
}