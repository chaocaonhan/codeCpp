#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=n;i>0;i--){
        for(int j=i;j>0;j--){
            if(i==n || j==i || j==1 ){
                cout<<"*";
            }
            else cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}