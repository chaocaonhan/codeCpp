#include<iostream>
#include<iomanip>

using namespace  std;

int main(){
    int r;
    cin>>r;
    float chuvi = 2*3.14*r;
    float dienTich = 3.14*r*r;
    cout<< fixed <<setprecision(2)<<chuvi<<" "<<dienTich;
}