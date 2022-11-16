#include <iostream>
using namespace std;
int main()
{
    int Size;
    cout << "enter the size of an array" << endl;
    cin >> Size;
    int Arr[Size];
    cout << "enter an array" << endl;
    for (int i = 0; i < Size; i++)
    {
        cin >> Arr[i];
    }
    cout << "Array before reverse" << endl;
    for (int i = 0; i < Size; i++)
    {
        cout << Arr[i] << " ";
    }
    cout << endl;
    cout << "Reverse Array" << endl;
  
    for (int i = Size - 1; i >= 0; i--)
    {
        cout << Arr[i] <<" ";}

    return 0;
}