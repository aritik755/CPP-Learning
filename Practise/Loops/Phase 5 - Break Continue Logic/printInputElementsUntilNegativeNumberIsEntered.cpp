#include <iostream>
using namespace std;

int main() {
    int num;
    
    cout << "Enter numbers (negative number to stop):" << endl;
    
    while (true) {
        cout << "Enter a number: ";
        cin >> num;
        
        if (num < 0) {
            cout << "Negative number detected. Stopping." << endl;
            break;
        }
        
        cout << "Number: " << num << endl;
    }
    
    return 0;
}