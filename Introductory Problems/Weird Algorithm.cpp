#include <iostream>

using namespace std;

int main() {
    long long n;
    cin >> n;
    
    cout << n << " ";
    
    while (n != 1) {
        if (n % 2 == 0) {
            n /= 2;
        } else {
            n = n * 3 + 1;
        }
        cout << n;
        if (n != 1) {
            cout << " ";
        }
    }
    
    return 0;
}
