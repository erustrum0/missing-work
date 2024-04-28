#include <iostream>

int main() {
    //setup variables, get input
    std::string names;
    int count = 5;
    std::cout << "Please list a bunch of names: ";
    std::cin >> names;

    //main loop
    for (int i=0; i<=count; ++i) {
        std::cout << i;
    }
    return 0;
}