#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    cout<<n%10<<endl;
    while (n>=10)
    {
        n=n/10;
    }
    cout<<n;
    return 0;
}