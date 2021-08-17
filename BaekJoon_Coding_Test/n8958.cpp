#include<iostream>
#include<string>
using namespace std;
int main(void) {
    int n;
    cin >> n;
    string result;
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        int score = 0;
        cin >> result;
        for (int j = 0; j < result.length(); j++) {
            if (result[j] == 'O') {
                score++;
                sum += score;
            }
            else
                score = 0;
        }
        cout << sum<<endl;
    }
}  

