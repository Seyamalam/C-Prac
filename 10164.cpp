#include <iostream>
#include <string>

bool isDivisibleBy55(const std::string& number) {
    int remainder = 0;
    for (char digit : number) {
        int currentDigit = digit - '0';
        remainder = (remainder * 10 + currentDigit) % 55;
    }
    return remainder == 0;
}

int main() {
    std::string line;

    while (std::getline(std::cin, line)) {
        if (isDivisibleBy55(line)) {
            std::cout << line << " is divisible by 55" << std::endl;
        } else {
            std::cout << line << " is not divisible by 55" << std::endl;
        }
    }

    return 0;
}
