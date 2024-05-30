#include <iostream>

struct TTime {
    int hours;   // Години: 0-23
    int minutes; // Хвилини: 0-59
    int seconds; // Секунди: 0-59
};

// Функція для перевірки правильності часу
bool isValidTime(const TTime& T) {
    return (T.hours >= 0 && T.hours < 24) &&
           (T.minutes >= 0 && T.minutes < 60) &&
           (T.seconds >= 0 && T.seconds < 60);
}

// Процедура для додавання однієї секунди до часу
void NextSec(TTime& T) {
    if (!isValidTime(T)) {
        return; // Час неправильний, не змінюємо його
    }

    T.seconds++;
    if (T.seconds >= 60) {
        T.seconds = 0;
        T.minutes++;
        if (T.minutes >= 60) {
            T.minutes = 0;
            T.hours++;
            if (T.hours >= 24) {
                T.hours = 0;
            }
        }
    }
}

// Функція для виведення часу у форматі HH:MM:SS
void printTime(const TTime& T) {
    std::cout << (T.hours < 10 ? "0" : "") << T.hours << ":"
              << (T.minutes < 10 ? "0" : "") << T.minutes << ":"
              << (T.seconds < 10 ? "0" : "") << T.seconds << std::endl;
}

int main() {
    // Визначення п'яти моментів часу
    TTime times[5] = {
        {23, 59, 59},
        {12, 30, 45},
        {0, 0, 0},
        {11, 59, 59},
        {13, 14, 59}
    };

    // Застосування процедури NextSec до кожного моменту часу
    for (int i = 0; i < 5; i++) {
        std::cout << "Час до NextSec: ";
        printTime(times[i]);
        NextSec(times[i]);
        std::cout << "Час після NextSec: ";
        printTime(times[i]);
        std::cout << std::endl;
    }

    return 0;
}
