#include <iostream>
using namespace std;

int main(){
int a=5 , b=2;
//arithmetic operators
cout<< (a+b) <<endl;
cout<< (a-b) <<endl;
cout<< (a*b) <<endl;
cout<< (a/b) <<endl;
cout<< (a%b) <<endl;

//for getting 2.5 as output we need to typecast one of the variable to double
cout<< (double(a)/b) <<endl;
return 0;

}