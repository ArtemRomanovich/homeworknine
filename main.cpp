#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

int main() {
    int size;
    cout<<"Сколько чисел будете вводить?: ";
    cin>>size;
    int max = 0;
    int min = 0;
    int sum = 0;
    for (int i = 0; i < size; i++) {
        int numberVal;
        cin>>numberVal;
        if (numberVal > max) {
            max = numberVal;
        }
        if (numberVal < min || min == 0) {
            min = numberVal;
        }
        sum += numberVal;
    }
    printf("Максимальное число: %i \n", max);
    printf("Минимальное число: %i \n", min);
    printf("Сумма всех чисел: %i \n", sum);
    printf("Среднее арифметическое: %zu \n", sum / size);


    return 0;
}
