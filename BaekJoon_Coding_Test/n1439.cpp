#include<iostream>
#include<string>
using namespace std;

int main(void) {
	string str;
	cin >> str;
	int divide = 1;
	int result = 0;
	for (int i = 1; i < str.length(); i++) 
		if (str[i] != str[i - 1])
			divide++;
	result = divide / 2;
	cout << result;
}