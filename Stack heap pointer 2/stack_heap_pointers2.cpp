#include <iostream>
using namespace std;
int main(){
    double *p=new double;
    *p=35.1;
    double *q=p;
    cout<<*q<<" "<<*p<<endl;
    p=new double;
    *p=21.0;
    cout<<*q<<" "<<*p<<endl;
    *q=12.0;
    cout<<*q<<" "<<*p<<endl;
    delete q;
    delete p;

    return 0;
}