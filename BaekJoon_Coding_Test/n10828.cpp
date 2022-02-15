#include<iostream>
using namespace std;

int s = 0;
int stack[10001];

void push(int num) {
	stack[s] = num;
	s++;
}
int pop() {
	if (s == 0)
		return -1;
	s--;
	return stack[s];
}
int size() {
	return s;
}
int empty() {
	if (s == 0)
		return 1;
	else
		return 0;
}
int top() {
	if (s == 0)
		return -1;
	return stack[s-1];
}

int main(void) {
	int n;
	cin >> n; //명령의 수
	while (n--) {
		string order;
		cin >> order;
		if (order == "push") {
			int num;
			cin >> num;
			push(num);
		}
		if (order == "pop") {
			cout << pop()<<endl;
		}
		if (order == "size") {
			cout << size() << endl;
		}
		if (order == "empty") {
			cout << empty() << endl;
		}
		if (order == "top") {
			cout << top() << endl;
		}
	}
}