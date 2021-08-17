#include<iostream>
#include<string>
using namespace std;
int main(void) {
    int A, B, C;
    cin >> A >> B >> C;
    int mult = A * B * C;
    string result = to_string(mult);
    for (char i = '0'; i <= '9'; i++) {
        int num = 0;
        for (int j = 0; j < result.length(); j++)
            if (result[j]==i)
                num++;
        cout << num << endl;
    }

}