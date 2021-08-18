#include<iostream>
using namespace std;

int main(void) {
	int case_num = 1;
	while (1) {
		int l, p, v;
		int max_result = 0;
		cin >> l >> p >> v;
		if (l == 0 && p == 0 && v == 0) break;
		
		max_result = (v / p) * l + (v % p> l? l: v%p);
		cout << "Case " << case_num << ": " << max_result<<endl;
		case_num++;
	}
}