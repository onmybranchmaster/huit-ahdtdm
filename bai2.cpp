#include <iostream>
#include <cmath>

using namespace std;

bool isPerfectSquare(int n) {
    // Xử lý trường hợp số âm
    if (n < 0) {
        return false;
    }

    // Sử dụng thư viện math.h để tính căn bậc hai chính xác
    double sqrt_n = sqrt(n);

    // So sánh căn bậc hai với số nguyên (cân nhắc độ chính xác)
    return abs(sqrt_n - round(sqrt_n)) < 1e-6;
}

int countPerfectSquares(int n) {
    int count = 0;

    // Duyệt từ 1 đến n
    for (int i = 1; i <= n; i++) {
        if (isPerfectSquare(i)) {
            count++;
        }
    }

    return count;
}

int main() {
    int n;
    cout << "Nhập n: ";
    cin >> n;

    // Xử lý lỗi đầu vào
    if (n < 0) {
        cout << "Lỗi: n phải là số nguyên không âm!" << endl;
        return 1;
    }

    int numPerfectSquares = countPerfectSquares(n);
    cout << "Số lượng số chính phương nhỏ hơn " << n << " là: " << numPerfectSquares << endl;
    
    for (int i = 1; i <= n; i++) {
        if (isPerfectSquare(i)) {
            cout << i << " ";
        }
    }

    return 0;
}
