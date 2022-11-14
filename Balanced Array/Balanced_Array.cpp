#include <iostream>
using namespace std;
int main()
{
    int Size;
    cout<<"enter size of an array"<<endl;
    cin >> Size;
    int Arr[Size];
    cout<<"enter array"<<endl;
    for (int i = 0; i < Size; i++)
    {
        cin >> Arr[i];
    }
    
    int Divide = Size / 2;
    int Sum1=0;
    for (int i = 0; i < Divide; i++)
    {
        Sum1 =Sum1+Arr[i];
    }
    int Sum2=0;
    for (Divide; Divide < Size; Divide++)
    {
        Sum2 =Sum2+Arr[Divide];
    }
       int Result;
    if (Sum1 > Sum2)
    {
        Result = Sum1 - Sum2;
        cout << "the required number to balanced an array is " << Result << endl;
    }
    else
    {
        Result = Sum2 - Sum1;
        cout << "the required number to balanced an array is " << Result << endl;
    }

    return 0;
}