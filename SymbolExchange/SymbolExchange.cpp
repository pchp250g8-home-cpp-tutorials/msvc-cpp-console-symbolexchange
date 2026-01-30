// SymbolExchange.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
#include <locale>

int main(int grgc, char* argv[])
{
    std::string strLine1, strLine2;
    system("chcp 1251 >nul");
    std::cout << "Input a string\r\n";
    std::getline(std::cin, strLine1);
    int nLen = strLine1.length();
    strLine2 = strLine1[nLen - 1] + strLine1.substr(1, nLen - 2) + strLine1[0];
    std::cout << "Exchange the first and the last symbol in the string\r\n";
    std::cout << "Source string:" << strLine1 << "\r\n";
    std::cout << "Destination string:" << strLine2 << "\r\n";
    std::cin.get();
    return 0;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
