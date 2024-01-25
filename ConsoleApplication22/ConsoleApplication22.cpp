#include <iostream>
#include <cmath>

int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    else {
        return n * factorial(n - 1);
    }
}

int main() {
    setlocale(LC_ALL, "Russian");

    int choice;
    double num1, num2;

    do {
        std::cout << "Выберите операцию:\n";
        std::cout << "1. Сложение\n";
        std::cout << "2. Вычитание\n";
        std::cout << "3. Частное\n";
        std::cout << "4. Произведение\n";
        std::cout << "5. Возведение в степень\n";
        std::cout << "6. Нахождение квадратного корня\n";
        std::cout << "7. Нахождение 1 процента от числа\n";
        std::cout << "8. Найти факториал числа\n";
        std::cout << "9. Выйти из программы\n";

        std::cout << "Введите номер операции: ";
        std::cin >> choice;

        switch (choice) {
        case 1:
            std::cout << "Введите первое число: ";
            std::cin >> num1;
            std::cout << "Введите второе число: ";
            std::cin >> num2;
            std::cout << "Результат: " << num1 + num2 << "\n";
            break;

        case 2:
            std::cout << "Введите первое число: ";
            std::cin >> num1;
            std::cout << "Введите второе число: ";
            std::cin >> num2;
            std::cout << "Результат: " << num1 - num2 << "\n";
            break;

        case 3:
            std::cout << "Введите делимое: ";
            std::cin >> num1;
            std::cout << "Введите делитель: ";
            std::cin >> num2;
            if (num2 != 0) {
                std::cout << "Результат: " << num1 / num2 << "\n";
            }
            else {
                std::cout << "Деление на ноль невозможно!\n";
            }
            break;

        case 4:
            std::cout << "Введите первое число: ";
            std::cin >> num1;
            std::cout << "Введите второе число: ";
            std::cin >> num2;
            std::cout << "Результат: " << num1 * num2 << "\n";
            break;

        case 5:
            std::cout << "Введите основание: ";
            std::cin >> num1;
            std::cout << "Введите степень: ";
            std::cin >> num2;
            std::cout << "Результат: " << std::pow(num1, num2) << "\n";
            break;

        case 6:
            std::cout << "Введите число: ";
            std::cin >> num1;
            if (num1 >= 0) {
                std::cout << "Результат: " << std::sqrt(num1) << "\n";
            }
            else {
                std::cout << "Квадратный корень из отрицательного числа не существует!\n";
            }
            break;

        case 7:
            std::cout << "Введите число: ";
            std::cin >> num1;
            std::cout << "Результат: " << num1 * 0.01 << "\n";
            break;

        case 8:
            std::cout << "Введите число для вычисления факториала: ";
            std::cin >> num1;
            if (num1 >= 0 && std::floor(num1) == num1) {
                std::cout << "Результат: " << factorial(static_cast<int>(num1)) << "\n";
            }
            else {
                std::cout << "Факториал определен только для неотрицательных целых чисел!\n";
            }
            break;

        case 9:
            std::cout << "Выход из программы.\n";
            break;

        default:
            std::cout << "Неверный выбор операции!\n";
        }

    } while (choice != 9);

    return 0;
}
