#include<iostream>
using namespace std;
int main(void) {
    int N;
    cin >> N;
    for (int i = 1; i <= N; i++) {
        for (int j = N; j >= 1; j--) {
            if (j > i) cout << " ";
            else cout << "*";
        }
        cout << "\n";
    }
}
//�����2