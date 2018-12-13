#include <iostream>
#include <cmath>

void f2 () {
    std::cout << "f2" << std::endl;
}

void f3 () {
    f2();
    std::cout << "f3" << std::endl;
}
void f1 () {
    f2(); f3();
    std::cout << "f1" << std::endl;
}

int main() {
    f1();
    return 0;
}