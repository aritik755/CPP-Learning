#include<iostream>
using namespace std;

int countOnes(int num) {
    int count = 0;
    while (num > 0) {
        if (num % 2 == 1) 
        count++;
        num /= 2;
    }
    return count;
}

int main() {
    int n;
    cout << "Enter the number of terms: ";
    cin >> n;

    cout << "Numbers from 1 to " << n << " with even number of 1s in binary:" << endl;
    for (int i = 1; i <= n; i++) {
        if (countOnes(i) % 2 == 0) {
            cout << i << "\n";
        }
    }
    cout << endl;

    return 0;
}