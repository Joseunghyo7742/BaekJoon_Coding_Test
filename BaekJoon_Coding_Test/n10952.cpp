#include<iostream>
using namespace std;
//A+B - 5
int main(void) {
    int A, B;
    while (1) {
        cin >> A >> B;
        if (A == 0 && B == 0)
            break;
        cout << A + B << endl;
    }
}