#include<iostream>
#include<math.h>

using namespace std;
int main(){
    long long n;
    cin>>n;
    long long kq1,kq2;
    kq1=(n*(n+1))/2;
    kq2=n*(n+1)*(2*n+1)/6;

    cout<<"sum 1 to N="<<kq1<<endl;
    cout<<"sum 1^2 to N^2="<<kq2;
}
