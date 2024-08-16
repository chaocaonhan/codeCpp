#include<iostream>
#include<math.h>

using namespace std;

bool nguyento(int n){
    int check=0;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            check++;
        }
    }
    if(check==0){
        return 1;
    }
    else return 0;
}

bool checkSoCuoi(int n){
    int hieu;
    hieu=n%10;
    n=n/10;
    while(n>0){
        hieu=hieu-n%10;
        n=n/10;
    }
    if(hieu>=-1){
        return 1;
    }
    else return 0;
}

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        if(nguyento(i)==1){
            if(checkSoCuoi(i)==1){
                cout<<i<<" ";
            }
        }
    }
    return 0;
}