#include <iostream>
#include <cmath>
#include <Windows.h>

double F(double u, double t) {
    if (u > 0) {
        return u + sin(t);
    }
    else {
        return u + t;
    }
}

int main() {
    setlocale(0, "rus");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    double a, b;
    std::cout << "Введите действительные a и b ";
    std::cin >> a >> b;
    if (std::cin.fail()) {
        std::cout << "Введите цифры ";
        return 1;
    }

    double z = F(sin(a), b) + F(cos(a), b) + F(pow(sin(a), 2), a - 1) + F(pow(sin(a), 2), cos(b));

    std::cout << "z= " << z << std::endl;

    return 0;
}
