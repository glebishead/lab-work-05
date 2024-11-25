#include <iostream>
#include <cmath>


int main() {
    /*1. Дана последовательность вещественных чисел {Aj}. 
    Найти сумму чисел, лежащих на отрезке [-7,19], 
    наибольшее из таких чисел и номер этого числа в последовательности.*/
    std::cout << "1." << std::endl;
     
    const int NMAX = 10000;
    int m[NMAX]  {-8, -7, -6, 18, 19, 20};
    
    int sum, max, num;
    for (int i = 0; i < NMAX; i++) {
        if (-7 <= m[i] & m[i] <= 19) {
            sum += m[i];
            if (m[i] > max) {
                max = m[i];
                num = i + 1;
            }
        }
    }
    
    std::cout << "Сумма: " << sum << std::endl;
    std::cout << "Наибольшее: " << max << std::endl;
    std::cout << "Его номер: " << num << std::endl;
    
    /*2. Дано натуральное число N (N<10^9). Найти сумму цифр числа N.*/
    std::cout << "2." << std::endl;
    
    int n = 12345678;
    int nsum = 0;
    for (int i = 1; i < 9; i++) {
        nsum += n % int(pow(10, i)) / int(pow(10, i - 1));
    }
    std::cout << "Сумма чисел: " << nsum << std::endl;
    return 0;
}
