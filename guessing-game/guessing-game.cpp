#include <iostream>
using namespace std;

static int secretNumber = 10;

int main() {
    int x;
    bool win = false;
    bool tried = false;

    cout << "Guess the secret number: ";
    
    while(!win) {
        if (tried && x != secretNumber) {
            if (secretNumber > x) {
                cout << "Too law, try again: ";
            } else {
                cout << "Too high, try again: ";
            }
        }

        if (x == secretNumber) {
            win = true;
        } else {
            cin >> x;
            tried = true;
        }
    }

    cout << "You won!";
}
