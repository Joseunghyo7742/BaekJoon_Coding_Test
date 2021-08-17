//더하기 사이클
#include <iostream>
using namespace std;
int main(void) {
    int N;
    int num = 0;
    cin >> N;
    if (N < 10)
        N *= 10;
    int temp = N;
    while (1) {
        temp = ((temp % 10) * 10) + (((temp / 10) + (temp % 10)) % 10);
        num++;
        if (temp == N) break;
    }
    cout << num;
}