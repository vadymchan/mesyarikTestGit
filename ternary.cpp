#include <iostream>

int main() {
    int x = 1;
    int a;
    std::cin >> a;
    (a == 1 ? ++x : ++a) = 5;
}
