#include <iostream>
#include <iomanip> // for setprecision

int main() {
    int a;
    long long b;
    char ch;
    float f;
    double d;

    std::cin >> a >> b >> ch >> f >> d;

    std::cout << a << '\n';
    std::cout << b << '\n';
    std::cout << ch << '\n';
    std::cout << std::fixed << std::setprecision(2) << f << '\n'; // limit to 2 decimal places
    std::cout << std::fixed << std::setprecision(2) << d << '\n'; // limit to 2 decimal places

    return 0;
}
