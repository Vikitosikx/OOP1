#include <iostream>
#include <locale>

int main() {
    // Специально для Visual Studio
    system("chcp 1251 > nul");
    enum Month { Jan = 1, Feb, Mar, Apr, May, Jun, Jul, Aug, Sep, Oct, Nov, Dec };

    int num;
    while (true) {
        std::cout << "Введите номер месяца: ";
        std::cin >> num;

        if (num == 0) {
            std::cout << "До свидания\n";
            break;
        }

        if (num < 1 || num > 12) {
            std::cout << "Неправильный номер!\n";
            continue;
        }

        switch (static_cast<Month>(num)) {
        case Jan: std::cout << "Январь\n"; break;
        case Feb: std::cout << "Февраль\n"; break;
        case Mar: std::cout << "Март\n"; break;
        case Apr: std::cout << "Апрель\n"; break;
        case May: std::cout << "Май\n"; break;
        case Jun: std::cout << "Июнь\n"; break;
        case Jul: std::cout << "Июль\n"; break;
        case Aug: std::cout << "Август\n"; break;
        case Sep: std::cout << "Сентябрь\n"; break;
        case Oct: std::cout << "Октябрь\n"; break;
        case Nov: std::cout << "Ноябрь\n"; break;
        case Dec: std::cout << "Декабрь\n"; break;
        }
    }
    return 0;
}