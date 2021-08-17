#include<iostream>
//빠른 A+B
using namespace std;
int main(void) {
    ios::sync_with_stdio(false); cin.tie(NULL);
    int N;
    int A, B;
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> A >> B;
        cout << A + B << "\n";
    }
}
//빠른 A+B