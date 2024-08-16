#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int tab=n-i;
        while (tab>1)
        {
            cout<<" ";
            tab--;
        }
        
        for(int j=0;j<n;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}