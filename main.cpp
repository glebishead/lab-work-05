#include <iostream>
#include <cmath>


int main() {
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
    
    std::cout << "Sum: " << sum << std::endl;
    std::cout << "Max: " << max << std::endl;
    std::cout << "Number: " << num << std::endl;
    
    // 2.
    std::cout << "2." << std::endl;
    
    int n = 12345678;
    int nsum = 0;
    for (int i = 1; i < 9; i++) {
        nsum += n % int(pow(10, i)) / int(pow(10, i - 1));
    }
    std::cout << "Сумма чисел: " << nsum << std::endl;
    return 0;
}
