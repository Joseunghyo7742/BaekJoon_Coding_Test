#include<iostream>
#include<string>
//�ܾ����
using namespace std;
int main(void) {
	string word;
	int count['Z'-'A'+1] = { 0, }; //���ĺ� ������ŭ 
	int max = 0;
	int index = 0;
	bool overlap = false;
	cin >> word;
	
	for (int i = 0; i < word.size(); i++) {
		word[i]=toupper(word[i]);
		count[word[i] - 'A'] += 1;
	} //���� ī����
	for (int i = 0; i < sizeof(count) / sizeof(count[0]); i++)
		if (count[i] > max) {
			max = count[i];
			index = i;
		}
	for (int i = 0; i < sizeof(count) / sizeof(count[0]); i++)
		if (count[i] == max && index!=i) {
			overlap = true;
			break;
		}
	if (overlap)
		cout << "?";
	else
		cout << (char)('A'+index);
		
}