#include<iostream>

int main() {
    int sum = 0;
    int num = 0;
    for (int i = 0; i < 3; ++i) {
        std::cin >> num;
        sum += num;
    }
    std::cout << sum << std::endl;
}