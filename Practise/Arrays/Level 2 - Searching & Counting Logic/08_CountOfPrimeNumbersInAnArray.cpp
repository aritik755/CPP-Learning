// 8. Find the count of prime numbers in the array.
#include<iostream>
using namespace std;

int main() {

    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    int array[n];

    cout << "Enter the elements of array:" << endl;
    for(int i = 0; i < n; i++) {
        cin >> array[i];
    }

    int primeCount = 0;

    for(int i = 0; i < n; i++) {

        int divisorCount = 0;

        for(int j = 1; j <= array[i]; j++) {
            if(array[i] % j == 0) {
                divisorCount++;
            }
        }

        if(divisorCount == 2) {
            primeCount++;
        }
    }

    cout << "Count of prime numbers in the array: " << primeCount << endl;

    return 0;
}