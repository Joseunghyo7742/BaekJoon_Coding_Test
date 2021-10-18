#include<iostream>
#include<vector>
using namespace std;

int main(void) {
	int k;
	int temp;
	int result = 0;

	cin >> k;
	vector<int> calcBox;
	for (int i = 0; i < k; i++) {
		cin >> temp;
		if (temp == 0) {
			calcBox.pop_back();
		}
		else
			calcBox.push_back(temp);
	}
	for (int j = 0; j < calcBox.size(); j++)
		result += calcBox[j];

	cout << result;
	

}
