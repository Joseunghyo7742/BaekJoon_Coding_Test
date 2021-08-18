#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    string str;
    cin >> str;
    int result = 0;
    string temp = "";
    bool isMinus = false;
    for (int i = 0; i <= str.size(); i++) {
        //연산자인경우
        if (str[i] == '+' || str[i] == '-' || str[i] == '\0') {
            if (isMinus)
                result -= stoi(temp);
            else
                result += stoi(temp);
            temp = "";

            if (str[i] == '-')
                isMinus = true;
            continue;
        }
        temp += str[i];
    }
    cout << result;
}



