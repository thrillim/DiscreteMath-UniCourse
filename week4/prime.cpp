#include <iostream>
using namespace std;

bool isPrime (int number) {
    int tf = 1;
    if (number > 1) {
        for (int i = 2; i < number / 2 + 1; i++) {
            if (number % i == 0) {
                tf = 0;
            }
        }
    } else tf = 0;
    
    if (tf == 1) {
        return true;
    } else {
        return false;
    }
}

int main() {
    int x;
    cin >> x;
    if(isPrime(x)) {
        cout << "Prime.";
    } else {
        cout << "Not a Prime.";
    }
    return 0;
}
