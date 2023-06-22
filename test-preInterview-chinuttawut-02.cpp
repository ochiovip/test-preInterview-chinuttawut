#include <iostream>
#include <string>

int SquareDigits(int n) {
    std::string result;
    std::string numStr = std::to_string(n);
    for (char digit : numStr) {
        int squaredDigit = (digit - '0') * (digit - '0');
        result += std::to_string(squaredDigit);
    }
    return std::stoi(result);
}

int main() {
    std::cout << SquareDigits(9119) << std::endl;  // 811181
    std::cout << SquareDigits(0) << std::endl;     // 0
    return 0;
}
