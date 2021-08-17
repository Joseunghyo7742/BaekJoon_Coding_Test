#include<iostream>
using namespace std;
int main(void) {
    int N;
    int max = -1000000;
    int min = 100000;
    cin >> N;
    int* arr = new int[N];
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
        if (arr[i] < min)
            min = arr[i];
        if (arr[i] > max)
            max = arr[i];
    }
    cout << min << " " << max;


}