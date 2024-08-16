#include<iostream>
using namespace std;

bool check(int n){
    int tongUoc = 0;
    for(int i=1;i<n;i++){
        if(n%i==0){
            tongUoc+=i;
        }
    }

    if(tongUoc==n){
        return 1;
    }
    else return 0;
}

int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        if(check(i)==1){
            cout<<i<<" ";
        }
    }
    return 0;
}