#include<iostream>
using namespace std;
//³ª¸ÓÁö
int main(void) {
    int n;
    int result = 0;
    int* ptr = new int[10]{-1,-1,-1,-1,-1,-1,-1,-1,-1,-1};
    
   for (int i=0; i < 10; i++) {
       bool already=false;
       cin >> n;
       for (int j = i; j >= 0; j--)
            if (ptr[j] == n % 42)
                already = true;
       if (already) continue;
       ptr[i] = n % 42;
       result++;
            }
   cout << result<<endl;
}