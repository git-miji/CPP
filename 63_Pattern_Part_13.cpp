#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int n, row, column;
    cout <<"Enter the number of Row: ";
    cin >> n;
    cout << endl;

    cout <<"Printing Number Pattern" << endl;
    cout <<"*************************" << endl;

    for (row=1; row<=n; row++)
    {
        //Printing Number
        for (column=1; column<=n - row; column++)
        {
            cout <<" ";
        }

        for (column=1; column<=2*row-1; column++)
        {
            cout << column;
        }

        cout <<endl;
    }

    cout <<"Printing Number Pattern" << endl;
    cout <<"*************************" << endl;

    for (row=1; row<=n; row++)
    {
        //Printing Number
        for (column=1; column<=n - row; column++)
        {
            cout <<" ";
        }

        for (column=1; column<=2*row-1; column++)
        {
            cout << row;
        }

        cout <<endl;
    }
    getch();
}

