#include <iostream>
#include <vector>

int main() {
    std::vector<int> v(10);
    v[100000] = 1;
    int x = 1;
    x /= v[0];
}
