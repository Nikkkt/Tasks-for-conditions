#include <iostream>
using namespace std;

int main()
{
    //TASK 1
    double l, w, h, n_liters, m_percents, r_price, wall_area, actual_wall_area, wasted_paint, price;
    
    cout << "Enter length of the room: ";
    cin >> l;
    
    cout << "Enter width of the room: ";
    cin >> w;
    
    cout << "Enter heigth of the room: ";
    cin >> h;
    
    cout << "Enter how many percent occupy wall windows and doors: ";
    cin >> m_percents;
    
    cout << "Enter how many gallons of paint falls on 1 m^2: ";
    cin >> n_liters;
    
    cout << "Enter how much 1 liter of paint costs: ";
    cin >> r_price;
    
    wall_area = 2 * (l * h + w * h);
    actual_wall_area = wall_area * (1 - m_percents / 100);

    wasted_paint = actual_wall_area * n_liters;
    price = r_price * wasted_paint;
    
    cout << "It will take " << wasted_paint << " liters of paint to paint the walls of this room" << endl;
    cout << "The total cost of this paint is " << price << endl;
    
    //TASK 2
    double a, b, c;
    
    cout << "Enter the first number: ";
    cin >> a;
    
    cout << "Enter the second number: ";
    cin >> b;
    
    cout << "Enter the third number: ";
    cin >> c;
    
    if (a < b) {
        if (a < c) {
            cout << a << " is the minimum number" << endl;
        }
        else if (c < a) {
            cout << c << " is the minimum number" << endl;
        }
        else if (a == c) {
            cout << a << " and " << c << " are the minimum numbers" << endl;
        }
    }
    
    if (b < a) {
        if (b < c) {
            cout << a << " is the minimum number" << endl;
        }
        else if (c < b) {
            cout << c << " is the minimum number" << endl;
        }
        else if (b == c) {
            cout << a << " and " << c << " are the minimum numbers" << endl;
        }
    }
    
    if (a == b) {
        if (c < a) {
            cout << c << " is the minimum number" << endl;
        }
        else if (a < c) {
            cout << a << " and " << b << " are the minimum numbers" << endl;
        }
        else if (a == c) {
            cout << "All numbers are equal" << endl;
        }
    }
    
    //TASK 3
    double number;
    
    cout << "Enter the number: ";
    cin >> number;
    
    if (number < 0) {
        cout << "This number is negative" << endl;
    }
    
    else if (number > 0) {
        cout << "This number is positive" << endl;
    }
    
    else {
        cout << "This number is equal to 0" << endl;
    }

    //TASK 4
    double x, y, resolt;
    char operation;

    cout << "Enter expression (Format: a+b | a-b | a*b | a/b | a%b):" << endl;
    cin >> x >> operation >> y;

    if (operation == '+') {
        resolt = x + y;
        cout << x << operation <<  y << "=" << resolt << endl;
    }

    else if (operation == '-') {
        resolt = x - y;
        cout << x << operation << y << "=" << resolt << endl;
    }

    else if (operation == '*') {
        resolt = x * y;
        cout << x << operation << y << "=" << resolt << endl;
    }

    else if (operation == '/') {
        if (y == 0) {
            cout << "Can`t divide by 0";
        } 

        else {
            resolt = x / y;
            cout << x << operation << y << "=" << resolt << endl;
        }
    }

    else if (operation == '%') {
        resolt = (long long)x % (long long)y;
        cout << x << operation << y << "=" << resolt << endl;
    }

    else {
        cout << "I can`t do it";
    }
}
