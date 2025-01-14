#include <iostream>
#include <cmath>
#include <algorithm>

int main()
{
    float x, y;
    const double PI = 3.141592653589793;

    std::cout << "X: ";
    std::cin >> x;
    std::cout << "Y: ";
    std::cin >> y;

    // Проверка на корректность ввода
    if (x <= 0) {
        std::cerr << "Error: x must be positive and non-zero." << std::endl;
        return 1;
    }

    double R = 1 / tan(PI * x / y);
    double S = pow(x + log(1 / x), 1 / 3);
    double C = std::max(R, S);

    std::cout << "R = " << R << "\n";
    std::cout << "S = " << S << "\n";
    std::cout << "C = " << C << "\n";

    std::cout << "Press ENTER to close app.... ";
    std::cin.ignore();
    std::cin.get();
    return 0;
}

