#include<iostream>
using namespace std;

int main(){
    unsigned int n;
    cin>>n;
    int nam, thang, ngay;
    nam=n/365;
    thang=(n-nam*360)/30;
    ngay=n-nam*365-thang*30;
    cout<<nam<<" "<<thang<<" "<<ngay;
    return 0;
}