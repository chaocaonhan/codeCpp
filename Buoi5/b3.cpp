#include<iostream>
using namespace std;

int main(){
    int n,kq=0;
    cin>>n;
    while (n>0)
    {
        kq+=(n%10);
        n=n/10;
    }
    cout<<kq;
    return 0;
}