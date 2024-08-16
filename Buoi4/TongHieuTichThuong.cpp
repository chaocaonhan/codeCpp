#include<iostream>
#include<iomanip>

using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    int tong = a+b;
    int hieu = a-b;
    long long tich = 1ll * a * b;
    float thuong = (float)a/b;
    cout<<tong<<"\t"<<hieu<<"\t"<<tich<<"\t"<<fixed<<setprecision(2)<<thuong;
}