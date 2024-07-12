/*
Задача 4 (дополнительная). Повышаем градус сложности*
Что нужно сделать
Вернитесь к задаче про обмен местами значений переменных и попробуйте решить её без использования 
третьей переменной (упс, спойлер, но ничего страшного!). Догадайтесь, в каких случаях новый способ 
может не работать и какие у него преимущества.

Советы и рекомендации:
• Используйте только две исходные переменные.
• Используйте арифметические операции для обмена.

Что оценивается:
• По окончании работы алгоритма обмена в переменной a должно лежать значение, которое изначально лежало в переменной b, и наоборот.
• В программе используются только две переменные.
*/

#include <iostream>

using namespace std;

int main(){
    int a = 48;
    int b = 79;

    a = b- a; 
    b = b -a; 
    a = a + b;

    cout << "a = "<< a << endl;
    cout << "b = " << b << endl;

}