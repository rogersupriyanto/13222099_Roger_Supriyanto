#include <iostream>

int main() {  
    // Alokasi memori sebesar 8 bytes masing-masing  
    double celsius, fahrenheit;

    std::cout << "Masukkan suhu dalam Celsius: ";  
    std::cin >> celsius;

    // Menggunakan 9.0 / 5.0 agar pembagian menghasilkan desimal (double)  
    fahrenheit = (9.0 / 5.0) * celsius + 32.0;

    std::cout << "Suhu dalam Fahrenheit: " << fahrenheit << std::endl;  
    return 0;  
}