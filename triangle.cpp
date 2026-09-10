//triangle pattern

#include <iostream>
using namespace std;
int main(){
    int d=5;
    for(int i=0; i<d; i++) {
        for(int j=0; j<i+1; j++) {
            cout << "* ";
        }
        cout << endl;
    }

    //for numbers
    int a=5;
    for(int i=0; i<a; i++){
        for(int j=0; j<i+1; j++){
            cout << i+1 << " ";
        }
        cout << endl;
    }

    int n=4;
    for (int i=0; i<n; i++){
        for (int j=1; j<=i+1; j++){
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}


