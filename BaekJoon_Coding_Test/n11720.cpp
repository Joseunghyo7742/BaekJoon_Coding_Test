#include<iostream>
//#include<string>
//숫자의합
using namespace std;
/*int main(void) {
	string num;
	int count;
	int sum=0;
	cin >> count;
	cin >> num;
	for (int i = 0; i < count; i++) {
		sum += num[i] - 48;
	}
	cout << sum;
}
*/
int main(void) {
	int count;
	int sum = 0;
	cin >> count;
	char* arr = new char[count];
	cin >> arr;
	for (int i = 0; i < count; i++) {
		sum += arr[i] - '0';
	}
	cout << sum;

}