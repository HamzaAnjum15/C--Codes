#include <iostream>
using namespace std;
int main(){
   int x=5;
   int y=6;
   cout<<"before x="<<x<<" and y="<<y<<endl;
   x=x+y;
   y=x-y;
   x=x-y;
   cout<<"after x="<<x<<" and y="<<y<<endl;


    return 0;
}