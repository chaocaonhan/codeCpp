#include<iostream>
using namespace std;

int main(){
    long long n;
    cin>>n;
    if(n%3==0 && n%5==0){
        cout<<1;
    }
    else cout<<0;
    return 0;
}