#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    // Area calculation of a rectangel
    double length, width, area;
    cout << "Enter length: " << endl;
    cin >> length;
    cout << endl;

    cout << "Enter width: " << endl;
    cin >> width;
    cout << endl;

    area = (length * width);
    cout << "The area of the rectangle is: " << area <<endl;
    getch();
}
