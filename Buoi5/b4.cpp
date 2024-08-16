#include<iostream>
#include<math.h>
using namespace std;

int check(int n){
    int dem=0;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0) dem++;
    }
    if(dem==0){
        return 1;
    }
    else{
        return 0;
    }
}
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        if(check(i)==1){
            cout<<i<<" ";
        }
    }
    return 0;
}