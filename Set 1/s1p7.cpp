#include <iostream>

int main() {
    int num = 12321;
    int originalNum = num;
    int reversedNum = 0;

    while (num > 0) {
        int remainder = num % 10;
        reversedNum = reversedNum * 10 + remainder;
        num /= 10;
    }

    if (originalNum == reversedNum) {
        std::cout << originalNum << " is a palindrome.";
    } else {
        std::cout << originalNum << " is not a palindrome.";
    }
    return 0;
}