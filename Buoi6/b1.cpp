#include<iostream>
using namespace std;

int main(){
    int hang,cot;
    cin>>hang>>cot;

    for(int i=0;i<hang;i++){
        for(int t=0;t<i;t++){
            cout<<" ";
        }
        for(int j=0;j<cot;j++){
            cout<<"*";
        }
        cout<<endl;
        //hhghg
    }
    return 0;
}