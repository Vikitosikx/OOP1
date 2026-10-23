#include <iostream>
#include <string>

// Структура для хранения адреса
struct Address {
    std::string city;
    std::string street;
    int houseNumber;
    int apartmentNumber;
    int index;
};

// Функция для вывода структуры на консоль
void printAddress(Address addr) {
    std::cout << "Город: " << addr.city << std::endl;
    std::cout << "Улица: " << addr.street << std::endl;
    std::cout << "Номер дома: " << addr.houseNumber << std::endl;
    std::cout << "Номер квартиры: " << addr.apartmentNumber << std::endl;
    std::cout << "Индекс: " << addr.index << std::endl;
    std::cout << std::endl;
}

int main() {
    // Создаём экземпляры структуры
    Address address1;
    Address address2;

    // Заполняем первый адрес
    address1.city = "Москва";
    address1.street = "Арбат";
    address1.houseNumber = 12;
    address1.apartmentNumber = 8;
    address1.index = 123456;

    // Заполняем второй адрес
    address2.city = "Ижевск";
    address2.street = "Пушкина";
    address2.houseNumber = 59;
    address2.apartmentNumber = 143;
    address2.index = 953769;

    // Выводим адреса на консоль
    printAddress(address1);
    printAddress(address2);

    return 0;
}