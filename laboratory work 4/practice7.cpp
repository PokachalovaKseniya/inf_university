#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
#include <cmath> // Для abs

// Функция для получения отрицательных элементов из массива
std::vector<int> getNegativeElements(const std::vector<int>& arrA) {
    std::vector<int> arrB;
    for (int val : arrA) {
        if (val < 0) {
            arrB.push_back(val);
        }
    }
    return arrB;
}

// Функция для нахождения симметрической разности двух множеств
std::vector<int> symmetricDifference(const std::vector<int>& arrA, const std::vector<int>& arrB) {
    std::vector<int> symmetricDiff;

    // Копируем элементы из A, которых нет в B
    for (int valA : arrA) {
        bool found = false;
        for (int valB : arrB) {
            if (valA == valB) {
                found = true;
                break;
            }
        }
        if (!found) {
            symmetricDiff.push_back(valA);
        }
    }

    // Копируем элементы из B, которых нет в A
    for (int valB : arrB) {
        bool found = false;
        for (int valA : arrA) {
            if (valB == valA) {
                found = true;
                break;
            }
        }
        if (!found) {
            symmetricDiff.push_back(valB);
        }
    }

    return symmetricDiff;
}


// Функция для вычисления среднего арифметического вектора
double calculateAverage(const std::vector<int>& arr) {
    if (arr.empty()) {
        return 0.0;
    }
    return std::accumulate(arr.begin(), arr.end(), 0.0) / arr.size();
}

int main() {
    // Задание 1: Получить массив B из отрицательных элементов массива A
    std::vector<int> arrA = { 1, -2, 3, -4, 5, -6, 7, -8, 9, -10 };
    std::vector<int> arrB = getNegativeElements(arrA);

    std::cout << "Array B (negative elements from A): ";
    for (int val : arrB) {
        std::cout << val << " ";
    }
    std::cout << std::endl;


    // Задание 2: Получить симметрическую разность A и B и ее среднее арифметическое
    std::vector<int> setA = { 1, 2, 3, 4, 5 };
    std::vector<int> setB = { 3, 4, 5, 6, 7 };

    std::vector<int> symDiff = symmetricDifference(setA, setB);
    double avg = calculateAverage(symDiff);

    std::cout << "Symmetric difference of A and B: ";
    for (int val : symDiff) {
        std::cout << val << " ";
    }
    std::cout << std::endl;
    std::cout << "Average of the symmetric difference: " << avg << std::endl;


    return 0;
}

