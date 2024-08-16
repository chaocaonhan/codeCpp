#include<iostream>
using namespace std;

int main(){
    char c;
    
    while(1){
        cin>>c;
        if(c>='a' && c<'z'){
            c+=1;
            cout<<c<<endl;
        } 
        else if(c>='A' && c<'Z'){
            c+=33;
            cout<<c<<endl;
        }
        if(c=='z' || c=='Z'){
            cout<<"a"<<endl;
        }
        else cout<<"Invalid"<<endl;   
        }
    return 0;
}