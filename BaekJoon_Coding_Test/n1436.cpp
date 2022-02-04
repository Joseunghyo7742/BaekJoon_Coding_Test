#include<iostream>
#include<string>
using namespace std;

int main(void) {
	int n;
	int count = 0;
	int result = 666;
	cin >> n;

	while (true) {
		if (to_string(result).find("666") != string::npos) //"666"숫자가 존재하면
			count++;
		if (n == count)
			break;
		result++;
	}
	cout << result;

}

/*
//to_string 함수
_NODISCARD inline string to_string(int _Val) { // convert int to string
	return _Integral_to_string<char>(_Val);
}

//string.find(string) 함수
- 반환값은 찾는 문자의 첫번째 인덱스 값
- 찾는 문자가 없을 경우 string::nops 리턴 (no position으로 쓰레기값)
*/