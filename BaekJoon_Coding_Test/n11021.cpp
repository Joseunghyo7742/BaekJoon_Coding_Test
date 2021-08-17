#include<iostream>
using namespace std;
int main(void) {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int T;
    cin >> T;
    for (int i = 1; i <= T; i++) {
        int A, B;
        cin >> A >> B;
        cout << "Case #" << i << ": " << A + B << "\n";
    }
}
//A+B-7