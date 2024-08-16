#include<iostream>
#include<iomanip>
#include<math.h>
using namespace  std;

int main(){
//     Tính khoảng cách Euclid giữa 2 điểm trong hệ tọa độ Oxy 
//     Input 
//     Tọa độ của 2 điểm (x1, y1) và (x2, y2) là các số nguyên.( -106 ≤xi, yi ≤106) 
//     Output 
//     Khoảng cách giữa 2 điểm lấy độ chính xác với 2 chữ số 
    pair<int,int> diem1, diem2;
    cin>>diem1.first>> diem1.second>>diem2.first>>diem2.second;
    float khoangCach=sqrt(pow(diem1.first-diem2.first,2)+pow(diem1.second-diem2.second,2));
    cout<<fixed<<setprecision(2)<<khoangCach;

}