#include <iostream>
#include <string>
using namespace std;

int main() {
    string arr;
    cin >> arr;

    int n = arr.length();
    int max_arr = 1;
    int current = 1;

    for (int i = 1; i < n; i++) {
        if (arr[i] == arr[i - 1]) {
            current ++;
        } else {
            max_arr = max(max_arr, current);
            current = 1; 
        }
    }

    max_arr = max(max_arr, current); 

    cout << max_arr << endl;

    return 0;
}
