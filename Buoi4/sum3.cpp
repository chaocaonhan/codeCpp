#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    float n;
    cin>>n;
    float kq=0.00;
    kq=(float)(n/(n+1));
    cout<<fixed<<setprecision(2)<<kq;
}