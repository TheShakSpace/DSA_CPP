//calculate the sum of numbers from 1 to N
#include <iostream>
using namespace std;
int sumN(int n){
    int sum = 0;
    for(int i=1; i<=n; i++){
        sum += i;
    }
    return sum;
}



// calculate N factorial 
int factN(int n){
    int fact = 1;
    for(int i=1; i<=n; i++){
        fact*=i;
    }
    return fact;
}

int main(){
    cout << sumN(20) << endl;
    cout << sumN(10) << endl;
    cout << factN(5) << endl;
}

//pass by value 
void changX(int x){
    x= 2*x;
    cout << "x= " << x << endl;
}

int main(){
    int x= 10;
    changX(x);
    cout << "x= " << x << endl;
} //output: x= 20, x= 10

//calculate sum of digits of number 
int sumOfDigits(int num){
    int digSum = 0;
    while(num>0){
        lastDig = num % 10;
       num = num / 10;
        digSum += lastDig; 
    }
    return digSum;
}

int main(){
    cout << "sum =" << sumOfDigits(1234) << endl;

    return 0;
} 