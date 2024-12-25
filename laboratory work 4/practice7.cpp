#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
#include <cmath>
#include <set>


// ������� ��� ��������� ������������� ��������� �� ������� � �� ������
std::vector<int> getNegativeElements(const std::vector<int>& numbers) {
    std::vector<int> negativeNumbers;
    std::cout << "Negative elements (Array B): ";
    for (int val : numbers) {
        if (val < 0) {
            negativeNumbers.push_back(val);
            std::cout << val << " ";
        }
    }
    std::cout << std::endl;
    return negativeNumbers;
}

// ������� ��� ����� ������� ����� �����
std::vector<int> inputArray() {
    int size;
    std::cout << "Enter size of array: ";
    std::cin >> size;
    std::vector<int> arr(size);
    std::cout << "Enter elements of array:" << std::endl;
    for (int i = 0; i < size; ++i) {
        std::cin >> arr[i];
    }
    return arr;
}



// ������� ��� ���������� �������������� �������� ���� ��������
std::vector<int> symmetricDifference(const std::set<int>& setA, const std::set<int>& setB) {
    std::vector<int> symDiff;
    std::set_symmetric_difference(setA.begin(), setA.end(), setB.begin(), setB.end(), std::back_inserter(symDiff));

    return symDiff;
}

// ������� ��� ����� ��������� ����� �����
std::set<int> inputSet() {
    int size;
    std::cout << "Enter the size of the set: ";
    std::cin >> size;
    std::set<int> s;
    std::cout << "Enter the elements of the set:" << std::endl;
    for (int i = 0; i < size; ++i) {
        int val;
        std::cin >> val;
        s.insert(val); // insert to make sure elements are unique
    }
    return s;
}

// ������� ��� ���������� �������� ��������������� �������
double calculateAverage(const std::vector<int>& arr) {
    if (arr.empty()) {
        return 0.0;
    }
    return std::accumulate(arr.begin(), arr.end(), 0.0) / arr.size();
}

int main() {
    // ������� 1: �������� ������ B �� ������������� ��������� ������� A
    std::cout << "Enter the data for array A:" << std::endl;
    std::vector<int> numbers = inputArray();
    std::vector<int> negativeNumbers = getNegativeElements(numbers);


    // ������� 2: �������� �������������� �������� A � B � �� ������� ��������������
    std::cout << "Enter data for set A:" << std::endl;
    std::set<int> setA = inputSet();
    std::cout << "Enter data for set B:" << std::endl;
    std::set<int> setB = inputSet();

    std::vector<int> symDiff = symmetricDifference(setA, setB);
    double avg = calculateAverage(symDiff);

    std::cout << "Symmetric difference of A and B: ";
    for (int val : symDiff) {
        std::cout << val << " ";
    }
    std::cout << std::endl;
    std::cout << "Arithmetic mean of symmetric difference: " << avg << std::endl;


    return 0;
}