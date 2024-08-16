#include <iomanip>
#include <iostream>

using namespace std;

int main()
{
    // Công thức chuyển đơn vị đo nhiệt độ từ C sang F như sau:
    // F = (C * 9 / 5) + 32
    // Viết chương trình C cho phép nhập vào nhiệt độ đo theo độ C là số nguyên dương
    // không quá 106, thực hiện chuyển
    // sang đơn vị đo độ F và in ra
    // màn hình. (Lưu ý luôn lấy 2 chữ số thập phân sau dấu chấm phẩy)
    int C;
    float F;
    cin >> C;
    if (C < 0 || C > 106)
    {
        cout << "Nhap lai do C tu 0 den 106";
    }

    else
    {
        F = (float)C * 9 / 5 + 32;
        cout << fixed << setprecision(2) << F;
    }
}