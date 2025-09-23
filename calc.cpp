#include <cmath> //библиотека си для вычислений
#include "calc.h" //заголовочный файл с прототипами функций

namespace calc {
/**
* @brief задача 11а.Даны x, y, z. Вычислить a если
* https://bgu-chita.ru/zadachnik/Glava01/index01.htm#z11
*
* @param x 
* @param y
*
* @return задача 11а.Даны x, y, z. Вычислить b если
https://bgu-chita.ru/zadachnik/Glava01/index01.htm#z11
*/
double calc_a(double x, double y) {
    return (sqrt(abs(x - 1)) - pow(abs(y), 1.0 / 3)) / (1 + (x * x / 2) + (y * y / 4));
}

/**
* @brief вычисление b
*
* @param x 
* @param z
*
* @return значение b
*/
double calc_b(double x, double z) {
    return x * (atan(z) + exp(-x - 3));
}
}