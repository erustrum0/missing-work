#include <iostream>
using namespace std;

int main() {
    int num;
    std::cout << "How deep will the pyramid be? ";
    std::cin >> num;
    num--;
    for (int i = 1; i <= num; i++) {
        for (int c = 1; c <= i; c++) {
            cout << c;
        }
        for (int c = i - 1; c >= 1; c--) {
            cout << c;
        }
        cout << endl;
    }
    return 0;
}
