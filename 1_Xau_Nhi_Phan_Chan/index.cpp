#include <iostream>
#include <bitset>

using namespace std;

bool isEvenBinary(const string &binary) {
    int count = 0;
    for (char c : binary) {
        if (c == '1') count++;
    }
    return count % 2 == 0;
}

void generateEvenBinaryStrings(int n) {
    int total = 1 << n;

    for (int i = 0; i < total; i++) {
        string binary = bitset<16>(i).to_string().substr(16 - n);
        if (isEvenBinary(binary)) {
            for (int j = 0; j < n; j++) {
                cout << binary[j] << (j == n - 1 ? "\n" : " ");
            }
        }
    }
}

int main() {
    int n;
    cin >> n;
    generateEvenBinaryStrings(n);
    return 0;
}
