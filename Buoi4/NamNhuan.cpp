#include<iostream>
using namespace std;

int main(){
    int nam;
    cin>>nam;
    if(nam<=0){
        cout<<"INVALID";
    }
    else{
        if(nam%4==0 && nam%100!=0){
            cout<<"Yes";
        }
        else cout<<"No";
    }
    return 0;
}