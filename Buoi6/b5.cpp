#include<iostream>
using namespace std;

int main(){
    int cot;
    cin>>cot;
    for(int i=0;i<cot;i++){
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}