#include<iostream>
#include<string>
using namespace std;

int main(void) {
	int n;
	int count = 0;
	int result = 666;
	cin >> n;

	while (true) {
		if (to_string(result).find("666") != string::npos) //"666"���ڰ� �����ϸ�
			count++;
		if (n == count)
			break;
		result++;
	}
	cout << result;

}

/*
//to_string �Լ�
_NODISCARD inline string to_string(int _Val) { // convert int to string
	return _Integral_to_string<char>(_Val);
}

//string.find(string) �Լ�
- ��ȯ���� ã�� ������ ù��° �ε��� ��
- ã�� ���ڰ� ���� ��� string::nops ���� (no position���� �����Ⱚ)
*/