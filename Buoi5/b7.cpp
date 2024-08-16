#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int x=n;
    int sochuso=0;
    while(n>0){
        n=n/10;
        sochuso++;
    }
    cout<<sochuso<<endl;
    //số cuối = n%(10*(n-1))
    int socuoi = x%10;
    int sodau = x/(int)pow(10,sochuso-1);
    x= x - socuoi - (sodau*(int)pow(10,sochuso-1))+sodau+(socuoi*(int)pow(10,sochuso-1));
    cout<<x;
    return 0;
}