#include<iostream>
#include<string.h>
using namespace std;
int giaiThua(int x){
    int kq=1;
    for(int i=1;i<=x;i++){
        kq*=i;
    }
    return kq;
}

bool check(int n){
    int kq=0;
    int x=n;
    while (n>0)
    {
        kq+=giaiThua(n%10);
        n=n/10;
    }
    if(kq==x){
        return 1;
    }
    else return 0;
}
int main(){
    int n;
    cin>>n;
    bool kq= check(n);
    cout<<kq;
    return 0;
}