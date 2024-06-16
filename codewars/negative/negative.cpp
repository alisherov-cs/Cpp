#include <iostream>

int makeNegative(int num) {
    if (num < 1) {
        return num;
    }
    return num * -1;
}

int main() {
    int result = makeNegative(1);
    std::cout << "res: " << result;
}
