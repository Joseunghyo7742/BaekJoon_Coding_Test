#include<iostream>
using namespace std;
int main(void) {
    int max = 0;
    int num;
    int pos;
    for (int i = 1; i <= 9; i++)
    {
        cin >> num;
        if (num >= max) { max = num; pos = i; }
    }
    cout << max << " " << pos;
}