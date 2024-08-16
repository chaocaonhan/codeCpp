#include<iostream>
using namespace std;

int main(){
    char c;
    while (1)
    {
        cin>>c;
       if(c>='a' && c<='z'){
        cout<<"Yes"<<endl;
    }
    else cout<<"No \n"<<endl;
    }
    return 0;
}