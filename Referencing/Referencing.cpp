// Программа Referencing
// Демонстрирует работу с ссылками

#include <iostream>
using namespace std;

int main()
{
    int myScore = 1000;
    int& mikesScore = myScore; // создаем ссылку
    cout << "myScore is: " << myScore << "\n";
    cout << "mikesScore is: " << mikesScore << "\n\n";
    cout << "Adding 500 to my Score\n";
    myScore += 500;
    cout << "myScore is: " << myScore << "\n";
    cout << "mikesScore is: " << mikesScore << "\n\n";
    cout << "Adding 500 to mikesScore\n";
    mikesScore += 500;
    cout << "myScore is: " << myScore << "\n";
    cout << "mikesScore is: " << mikesScore << "\n\n";
    return 0;
}
