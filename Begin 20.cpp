#include <iostream>
#include <cmath> // Для функції sqrt

// Функція для обчислення відстані між двома точками
double calculateDistance(double x1, double y1, double x2, double y2) {
    double deltaX = x2 - x1;
    double deltaY = y2 - y1;
    return std::sqrt(deltaX * deltaX + deltaY * deltaY);
}

int main() {
    // Змінні для зберігання координат
    double x1, y1, x2, y2;

    // Введення координат першої точки
    std::cout << "Введіть координати першої точки (x1 y1): ";
    std::cin >> x1 >> y1;

    // Введення координат другої точки
    std::cout << "Введіть координати другої точки (x2 y2): ";
    std::cin >> x2 >> y2;

    // Обчислення відстані між точками
    double distance = calculateDistance(x1, y1, x2, y2);

    // Виведення результату
    std::cout << "Відстань між точками: " << distance << std::endl;

    return 0;
}

