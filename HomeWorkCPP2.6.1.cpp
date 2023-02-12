#include <iostream>
#include <locale>

#include <Calculator.h>

int main()
{
    setlocale(LC_ALL, "Russian");
    float num1 = 0, num2 = 0;
    int actions = 0;
    Calculator calculator;
    do {
        std::cout << "Выберите операцию (1 - сложение, 2 вычитание, 3 - умножение, 4 - деление, 5 - возведение в степень, 0 - завершение программы): ";
        std::cin >> actions;
        if (actions == 0) {
            return 1;
        }
        std::cout << "Введите первое число: ";
        std::cin >> num1;
        std::cout << "Введите второе число: ";
        std::cin >> num2;
        if (actions == 1) {
            std::cout << num1 << " + " << num2 << " = " << calculator.summation(num1, num2) << std::endl;
        }
        if (actions == 2) {
            std::cout << num1 << " - " << num2 << " = " << calculator.subtraction(num1, num2) << std::endl;
        }
        if (actions == 3) {
            std::cout << num1 << " * " << num2 << " = " << calculator.multiplication(num1, num2) << std::endl;
        }
        if (actions == 4) {
            std::cout << num1 << " / " << num2 << " = " << calculator.division(num1, num2) << std::endl;
        }
        if (actions == 5) {
            std::cout << num1 << " в степени " << num2 << " = " << calculator.exponentiation(num1, num2) << std::endl;
        }
        std::cout << std::endl;
    } while (true);
}