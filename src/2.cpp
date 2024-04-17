#include <iostream>

int main() {
    //setup variables, get input
    int num;
    std::cout << "How deep will the pyramid be? ";
    std::cin >> num;
    std::cout << "Building...\n\n\n";
    num--; //this might be cursed

    //main loop
    for (int i=1; i<=num; i++) {
        //first nested loop, going up
        for (int c=1; c<=i; c++) {
            std::cout << c;
        }
        //second nested loop, going down
        for (int c=i-1; c>=1; c--) {
            std::cout << c;
        }
        std::cout << "\n" << std::flush; //i like std::flush, fite me
    }
    return 0;
}