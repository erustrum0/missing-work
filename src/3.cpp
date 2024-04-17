#include <iostream>

int main() {
    //setup variables, get input
    char chr = 'A';
    int row;
    std::cout << "How deep will the pyramid be? ";
    std::cin >> row;
    std::cout << "Building...\n\n\n";

    //main loop
    for (int i=1; i<=row; ++i) {
        //nested loop, increments and outputs the char
        for (int c=1; c<=i; ++c) {
            std::cout << chr;
        }
        chr++;
        std::cout << "\n" <<std::flush; //i like std::flush, fite me
    }
    return 0;
}