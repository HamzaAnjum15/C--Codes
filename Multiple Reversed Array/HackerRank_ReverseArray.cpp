#include <iostream>
using namespace std;
void Reverse(int A[], int s)
{

    for (int i = 0; i < s; i++)
    {
        for (int j = 0; j < s - i - 1; j++)
        {
            int m = j;

            int temp = A[m];
            A[m] = A[m + 1];
            A[m + 1] = temp;
            for (int i = 0; i < s; i++)
    {
        cout << A[i] << " ";
    }
    cout << endl;
        }
    }
   

    for (int i = 0; i < s - 1; i++)
    {

        int m = i;

        int temp = A[m];
        A[m] = A[m + 1];
        A[m + 1] = temp;
        for (int i = 0; i < s; i++)
        {
            cout << A[i] << " ";
        }
        cout << endl;
    }
}
int main()
{
    int Size;
    cout << "enter size of an array" << endl;
    cin >> Size;
    int Arr[Size];
    cout << "enter Array" << endl;
    for (int i = 0; i < Size; i++)
    {
        cin >> Arr[i];
    }

    Reverse(Arr, Size);

    return 0;
}