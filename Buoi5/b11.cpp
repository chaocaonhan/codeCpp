#include<iostream>
using namespace std;

bool checkFibo(long long n){
    int fn1=0,fn2=1,fn;
    if(n==0 || n==1){
        return 1;
    }
    for(int i=2;i<=92;i++){
        fn=fn1+fn2;
        if(fn==n){
            return 1;
        }
        fn1=fn2;
        fn2=fn;
    }
    return 0;
}
int main(){
    int n;
    cin>>n;
    for(int i=0;i<=n;i++){
        if(checkFibo(i)==1){
        cout<<i<<" ";
    }
    }
    return 0;
}