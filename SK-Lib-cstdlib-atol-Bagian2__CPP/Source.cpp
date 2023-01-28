#include <iostream>
#include <cstdlib>
#include <conio.h>

int main() {
    std::string number = "12345";
    long int result;

    result = atol(number.c_str());

    std::cout << "The string \"" << number << "\" converted to long int is: " << result << std::endl;

    _getch();
    return 0;
}
