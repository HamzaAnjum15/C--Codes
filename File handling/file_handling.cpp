#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ofstream hamza;
    hamza.open("sample.txt");
    hamza<<"i am a computer science student";
    hamza.close();
    ifstream hamza2;
    hamza2.open("sample.txt");
    string st;
    getline(hamza2,st);
    cout<<st;
    hamza2.close();

    return 0;
}