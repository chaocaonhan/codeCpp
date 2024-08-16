#include<iostream>
using namespace std;

int giaiThua(int n){
    int gt=1;
    for(int i=1;i<=n;i++){
        gt*=i;
    }
    return gt;
}

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            int temp=giaiThua(i)/(giaiThua(j)*giaiThua(i-j));
            cout<<temp<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}