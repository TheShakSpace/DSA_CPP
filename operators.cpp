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

//relational operator 
cout<< (a>b) <<endl;   //true
cout<< (a<b) <<endl;   //false
cout<< (a>=b) <<endl;  //true
cout<< (a<=b) <<endl;  //false
cout<< (a==b) <<endl;  //false
cout<< (a!=b) <<endl;  //true

//logical operator
cout<< (a>b && a!=b) <<endl;  //true
cout<< (a>b || a==b) <<endl;  //true
cout<< !(a>b) <<endl;  //false

//unary operator 
int b = a++;
cout << b <<endl;  //5
cout << a <<endl;  //6

int a= ++b;
cout << a <<endl;  //6
cout << b <<endl;  //6
return 0;

}