#include <iostream>
using namespace std;

int main(){
   
    int *p;
    *p=17;
    int *q;
    *q=*p;
    *p=27;
    int *temp=q;
    q=p;
    p=temp;
    cout<<*p<<" "<<*q<<endl;
    delete p;
    delete q;
    

    return 0;
}