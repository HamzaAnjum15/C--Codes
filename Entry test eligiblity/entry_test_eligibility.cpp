#include <iostream>
using namespace std;
int main()
{
    string year;
    cout << "enter your university year" << endl;
    cin >> year;
    string eligibility = "you are not eligible";
    if (year == "1st")
    {
        cout << eligibility;
    }
    else if (year == "2nd")
    {
        cout << eligibility;
    }
    else if (year == "3rd")
    {
        cout << eligibility;
    }
    else if (year == "4th")
    {
        cout << "you are eligible";
    }
    else
    {
        cout << "error: enter your year correctly";
    }

    return 0;
}