#include <iostream>

// Функція для перевірки, чи лежить точка у другій чверті
bool isInSecondQuadrant(double x, double y) {
    return (x < 0 && y > 0);
}

int main() {
    double x, y;

    // Введення координат точки
    std::cout << "Введіть координати точки (x y): ";
    std::cin >> x >> y;

    // Перевірка, чи точка лежить у другій чверті
    if (isInSecondQuadrant(x, y)) {
        std::cout << "Точка з координатами (" << x << ", " << y << ") лежить у другій координатній чверті." << std::endl;
    } else {
        std::cout << "Точка з координатами (" << x << ", " << y << ") НЕ лежить у другій координатній чверті." << std::endl;
    }

    return 0;
}
