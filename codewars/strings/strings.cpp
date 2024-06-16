#include <iostream>
#include <string>

std::string greet(const std::string& name) {
    return "Hello, " + name + " how are you doing today?";
}

int main() {
    std::string result = greet("John");
    std::cout << result;
}
