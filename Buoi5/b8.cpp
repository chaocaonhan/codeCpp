#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int ouput=0;
    while(n>0){
        n=n/10;
        ouput++;
    }
    cout<<ouput;
    return 0;
}