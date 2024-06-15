#include <cstring>
#include <iostream>
using namespace std;

class Calculator {
    public:
        float add(float x, float y) {
            return x + y;
        }

        float sub(float x, float y) {
            return x - y;
        }

        float div(float x, float y) {
            return x / y;
        }

        float mlt(float x, float y) {
            return x * y;
        }
};

bool contains(char operations[4], char operation) {
    for (int i = 0; i < 4; i++) {
        if (operations[i] == operation) {
            return true;
        }
    }

    return false;
}

float operate(float x, float y, char operation) {
    Calculator calculator;

    switch (operation) {
        case '+':
            return calculator.add(x, y);
        case '-':
            return calculator.sub(x, y);
        case '/':
            return calculator.div(x, y);
        case '*':
            return calculator.mlt(x, y);
        default:
            return calculator.add(x, y);
    }
}

int main() {
    float x, y;
    char operation;
    char operations[4] = { '+', '-', '*', '/' };
    
    cout << "Enter number x: ";
    cin >> x;
    cout << "Enter number y: ";
    cin >> y;

    while(!contains(operations, operation)) {
        cout << "Choose operation (+, -, *, /): ";
        cin >> operation;
    }

    cout << "res: " << operate(x, y, operation);
}
