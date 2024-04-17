#include <iostream>

int main() {
    //setup variables, get input
    int num = 1;
    int row;
    std::cout << "How deep will the pyramid be? ";
    std::cin >> row;
    std::cout << "Building...\n\n\n";

    //main loop
    for (int i=1; i<=row; ++i) {
        //nested loop, increments and outputs 'num'
        for (int c=1; c<=i; ++c) {
            std::cout << num++ << " ";
        }
        std::cout << "\n" <<std::flush; //i like std::flush, fite me
    }
    return 0;
}