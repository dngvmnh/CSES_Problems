#include <iostream>
using namespace std;

int main() {
    long long n;
    cin >> n;

    long long total_sum = (long long)n * (n + 1) / 2; 

    long long given_sum = 0;

    for (int i = 1; i < n; i++) {
        int x;
        cin >> x;
        given_sum += x;
    }

    long long num = total_sum - given_sum;

    cout << num;

    return 0;
}
