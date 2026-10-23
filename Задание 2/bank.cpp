#include <iostream>
#include <string>

// Структура для хранения информации о банковском счёте
struct BankAccount {
    int accountNumber;
    std::string ownerName;
    double balance;
};

// Функция для изменения баланса счёта (передача по ссылке)
void changeBalance(BankAccount& account, double newBalance) {
    account.balance = newBalance;
}

int main() {
    // Специально для Visual Studio
    system("chcp 1251 > nul");
    // Создаём экземпляр структуры
    BankAccount account;

    // Запрашиваем информацию у пользователя
    std::cout << "Введите номер счёта: ";
    std::cin >> account.accountNumber;

    std::cout << "Введите имя владельца: ";
    std::cin.ignore(); // Игнорируем символ новой строки после предыдущего ввода
    std::getline(std::cin, account.ownerName); // Читаем всю строку (может содержать пробелы)

    std::cout << "Введите баланс: ";
    std::cin >> account.balance;

    // Запрашиваем новый баланс
    double newBalance;
    std::cout << "Введите новый баланс: ";
    std::cin >> newBalance;

    // Изменяем баланс с помощью функции
    changeBalance(account, newBalance);

    // Выводим обновлённую информацию
    std::cout << "Ваш счёт: " << account.ownerName << ", "
        << account.accountNumber << ", " << account.balance << std::endl;

    return 0;
}