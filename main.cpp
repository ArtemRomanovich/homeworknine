#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

int main() {
    printf("Введите набор целых чисел через пробел:");
    string inputline;
    getline(cin, inputline);
    istringstream iss(inputline);

    vector<int> values;
    values.reserve((inputline.length() + 1)/2); // heuristics
    int inputValue;
    while (iss >> inputValue)
        values.push_back(inputValue);

    auto size = values.size();
    int max = 0;
    int min = 0;
    int sum = 0;
    for (auto v : values) {
        if (v > max) {
            max = v;
        }
        if (v < min || min == 0) {
            min = v;
        }
        sum += v;
    }
    printf("Максимальное число: %i \n", max);
    printf("Минимальное число: %i \n", min);
    printf("Сумма всех чисел: %i \n", sum);
    printf("Среднее арифметическое: %zu \n", sum / size);


    return 0;
}
