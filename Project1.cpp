
#include <iostream>
#include <algorithm>
#include <cmath>

int main()
{
    float x, y;
    const double PI = 3.141592653589793;

    std::cout << "X: ";
    std::cin >> x;
    std::cout << "Y: ";
    std::cin >> y;

    double R = 1 / tan(PI * x / y);
    double S = pow(x + log(1 / x), 1 / 3);
    double C = std::max(R, S);

    std::cout << "R = " << R << "\n";
    std::cout << "S = " << S << "\n";
    std::cout << "C = " << C << "\n";

    std::cout << "Press ENTER to close app.... ";
    system("pause");
    return 0;

}
