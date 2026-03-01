#include <stdio.h>

int absolute(int x) {
    if (x >= 0)
        return x;
    else
        return -x;
}

int main() {
    int number = 42;  
    int result = absolute(number);
    int number1 = -42;  
    int result1 = absolute(number1);
    
    printf("Абсолютное значение числа %d равно %d\n", number, result);
    printf("Абсолютное значение числа %d равно %d\n", number1, result1);
    
    return 0;
}