#include <iostream>
#include <vector>

// 2.3. Arrays.


void f(std::vector<double> v);

int main() {
    int a[5] = {1, 2, 3, 4, 5};
   
    // 3[a] == *(3+a)
    std::cout << 3[a] << '\n';

    // Array to pointer conversion.
    int* p = a + 2;
    std::cout << p[-2] << '\n';

    int n;
    std::cin >> n;
    int b[n];
    std::cout << b - a << ' ';

    std::cout << sizeof(a) << ' ' << sizeof(p);

    int* pa = new int[100];
    delete[] pa;
}
