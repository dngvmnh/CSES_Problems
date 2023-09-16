#include <iostream>
using namespace std;

int main() {
    long long n;
    cin >> n;

    long long total_sum = (long long)n * (n + 1) / 2; 

    long long sum_of_given_numbers = 0;

    for (int i = 1; i < n; i++) {
        int x;
        cin >> x;
        sum_of_given_numbers += x;
    }

    long long missing_number = total_sum - sum_of_given_numbers;

    cout << missing_number;

    return 0;
}
