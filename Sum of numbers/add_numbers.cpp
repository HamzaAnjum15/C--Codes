#include <iostream>
using namespace std;
int sum(int a, int b)
{
    int c;
    c = a + b;
    return c;
}
int main()
{

    int a, b;
    cout << "enter 1st number ";
    cin >> a;
    cout << "enter 2nd number ";
    cin >> b;
    cout << "the function returns " << sum(a, b);
    return 0;
}
