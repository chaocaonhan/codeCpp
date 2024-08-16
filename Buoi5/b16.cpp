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

int main(){
    int firstNum, seconNum;
    cin>>firstNum>>seconNum;

    for(int i=firstNum;i<=seconNum;i++){
        for(int j=2;j<=(i/2);j++){
            if(nguyento(j)==1){
                if(i%j==0 && i%(j*j)==0){
                    cout<<i<<" ";
                    break;
                }
            }
        }
    }
    return 0;
}