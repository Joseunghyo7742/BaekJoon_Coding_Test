#include<iostream>
using namespace std;
//±×¸®µð
int main(void) {

		const int bag_1 = 3;
		const int bag_2 = 5;
		int n;
		cin >> n;
		int quot = n / bag_2;
		int result = 100000;
		for (int i = quot; i >= 0; i--) {
			if ((n - (i * bag_2)) % bag_1 != 0) continue;
			int temp = i + (n - i * bag_2) / bag_1;
			if (temp <= result)
				result = temp;
		}
		if (result == 100000)
			result = -1;
		cout << result;
}