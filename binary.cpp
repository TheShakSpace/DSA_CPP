#include <iostream>
using namespace std;

int decToBinary(int decNum){
    int ans=0, pow=1;
    while(decNum > 0){
        int rem = decNum % 2;
        decNum = decNum / 2;
        ans += (rem * pow);
        pow = pow * 10;
    }
    return ans;
}

int binToDec(int binNum){
    int an=0, power=1;
    while(binNum > 0){
        int lastDig = binNum % 10;
        an += lastDig * power;
        binNum /= 10;
        power *= 2;
    }
return an;
}

int main(){
    cout << decToBinary(10) << endl;
    cout << decToBinary(20) << endl;
    cout << decToBinary(30) << endl;
    cout << binToDec(1010) << endl;
    return 0;
}