#include <iostream>
//библиотека для изменения языковой и региональной среды выполнения программы
#include <clocale>  
using namespace std;

// Объявление с параметром по умолчанию
void greet(string name = "Гость") {
    cout << "Привет, " << name << "!" << endl;
}

int main() {

    //для исп. кириллицы в функциях ввода, вывода
    setlocale(LC_ALL, "ru_RU.UTF-8");

    greet();           // → Привет, Гость!
    greet("Анна");     // → Привет, Анна!
    return 0;
}