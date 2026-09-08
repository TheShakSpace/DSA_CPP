#include <iostream>
using namespace std;
int main(){
char ch;
cout<<"Enter a character: ";
cin >> ch;
if(ch >= 'a' && ch <= 'z'){
    cout<<"Lowercase letter";
} else {
        cout << "uppercase letter";
    }

    //while loop
    int count = 1;
    while(count <= 5){
        cout << count << endl;
        count++;
    }
    return 0;

    //for loop , sum of numbers from 1 to n
    int n= 4;
    int sum = 0;
    for(int i=1; i<=n; i++) {
        sum =+ i;
    }

    //sum of all odd numbers from 1 to N
    int n= 10;
    int oddsum = 0;
    for(int i=1; i<=n; i++){
        if(i % 2 !=0) {
            oddsum =+ i;
        }
    }
    cout << "odd sum =" << oddsum << endl;

    //check if a number is prime or not
    int n= 7;
    bool isPrime = true;
    for(int i=2; i<=n-1; i++){
        if(n%i==0){
            isPrime = false;
            break;
        } 
    }
     
    if(isPrime == true){ 
        cout << "prine number";
    } else {
        cout << "non prime number";
    }
    }

