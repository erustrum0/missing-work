#include <iostream>

int main() {
    int num = 1;
    int row;
    std::cout << "How deep will the pyramid be? ";
    std::cin >> row;
    std::cout << "Building...\n\n\n";
    for (int i = 1; i <= row; ++i) {
        for (int j = 1; j <= i; ++j) {
            std::cout << num << " ";
            ++num;
        }
        std::cout << std::endl;
    }
    return 0;
}