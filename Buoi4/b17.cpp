#include<iostream>
using namespace std;

int main(){
    int t,n;
    do
    {
        cin>>t>>n;
        if(t<=0 || n<=0 || t>12){
            cout<<"Invalid";
        }
    } while (t<=0 || n<=0 || t>12);
    switch (t)
    {
    case 1: case 3: case 5: case 7: case 8: case 10: case 12:
        cout<<31;
        break;
    case 4 : case 6: case 9 : case 11: 
        cout<<30;
        break;
    case 2:
        if((n%4==0 && n%100 !=0) || (n%400==0)){
            cout<<29;
        }
        else cout<<28;
        break;
    default:
        break;
    }
    return 0;
}