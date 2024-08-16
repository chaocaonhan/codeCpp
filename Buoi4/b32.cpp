#include<iostream>
using namespace std;

int main(){
    int a, b, c, d, e;
    cin >> a >> b >> c >> d >> e;

    // Giả sử a là giá trị nhỏ nhất và b là giá trị nhỏ thứ hai
    int minValue = a;
    int secondMinValue = b;

    // Kiểm tra và hoán đổi nếu cần
    if (b < minValue) {
        minValue = b;
        secondMinValue = a;
    }

    // So sánh với c
    if (c < minValue) {
        secondMinValue = minValue;
        minValue = c;
    } else if (c < secondMinValue) {
        secondMinValue = c;
    }

    // So sánh với d
    if (d < minValue) {
        secondMinValue = minValue;
        minValue = d;
    } else if (d < secondMinValue) {
        secondMinValue = d;
    }

    // So sánh với e
    if (e < minValue) {
        secondMinValue = minValue;
        minValue = e;
    } else if (e < secondMinValue) {
        secondMinValue = e;
    }

    // In ra số nhỏ thứ hai
    cout << "So nho thu hai la: " << secondMinValue << endl;

    return 0;
}
