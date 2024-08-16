#include<iostream>
using namespace std;

int main(){
    int a, b, c;
    
    while(1){
        cin >> a >> b >> c;
        
        // Kiểm tra nếu bất kỳ cạnh nào không hợp lệ
        if (a <= 0 || b <= 0 || c <= 0) {
            cout << "No" << endl;
            break; // Thoát khỏi vòng lặp nếu nhập cạnh không hợp lệ
        }
        
        // Kiểm tra điều kiện tam giác hợp lệ
        if (a + b > c && a + c > b && b + c > a) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
    
    return 0;
}
