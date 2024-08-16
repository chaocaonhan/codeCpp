#include<iostream>
#include<math.h>
using namespace std;

int check(int n, int sochuso){
    int output=0;
    while(n>0){
        output+=pow(n%10,sochuso);
        n=n/10;
    }
    return output;
}
int main(){
    int n;
    cin>>n;
    int temp = n;
    int sochuso=0,outPut;
    while(temp>0){
        temp=temp/10;
        sochuso++;
    }
    outPut = check(n,sochuso);
    if(outPut==n){
        cout<<1;
    }
    else cout<<0;
    return 0;
}