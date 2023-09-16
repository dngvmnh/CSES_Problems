#include <iostream>
#include <string>
using namespace std;

int main() {
    string dna_sequence;
    cin >> dna_sequence;

    int n = dna_sequence.length();
    int max_repetition = 1;
    int current_repetition = 1;

    for (int i = 1; i < n; i++) {
        if (dna_sequence[i] == dna_sequence[i - 1]) {
            current_repetition++;
        } else {
            max_repetition = max(max_repetition, current_repetition);
            current_repetition = 1; 
        }
    }

    max_repetition = max(max_repetition, current_repetition); 

    cout << max_repetition << endl;

    return 0;
}
