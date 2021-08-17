//x보다 작은 수.
#include<iostream>
using namespace std;
int main(void) {
    int N, X;
    cin >> N >> X;
    //int arr[N] x
    int* arr = new int[N];
    for (int i = 0; i < N; i++)
        cin >> arr[i];
    for (int j = 0; j < N; j++)
    {
        if (arr[j] < X)
            cout << arr[j] << " ";
    }
    delete[] arr;
}