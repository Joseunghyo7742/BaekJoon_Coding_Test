#include<iostream>
#include<string>
using namespace std;
int main(void){
    int dial[] ={3,3,3,4,4,4,5,5,5,6,6,6,7,7,7,8,8,8,8,9,9,9,10,10,10,10};
    int result=0;
    string alpa;
    cin>>alpa;
    for(int i=0; i<alpa.length(); i++){
        result+=dial[(int)alpa[i]-'A'];
    }
    cout<<result;
}