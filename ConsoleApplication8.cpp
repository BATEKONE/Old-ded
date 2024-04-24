#include <iostream>
#include "Car.h"
using namespace std;


void print2()
{
    cout << "Начало работы print2" << endl;
    Car car3(4, 7, 1);
    cout << "Конец работы print2" << endl;
}


void main()
{
    setlocale(0, "ru");
    Car car1;
    int x, y, z;
    cin >> x >> y >> z;
    Car car2(x, y, z);
    car1.Print();
    car2.Print();
    print2();

    cin >> x >> y >> z;
    Car car4(x, y);
    car4.setZ(z);
    car4.Print();

}
