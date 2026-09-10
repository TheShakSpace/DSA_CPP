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

    int b=4;
    for(int i=0; i<b; i++){
        for(int j=1+1; j>0; j--){
            cout << j << " ";
        }
        cout << endl;
    }
//inverted triangle pattern
    int f=4;
            for(int i=0; i<f; i++){
                //spaces prints
                for(int j=0; j<i; j++){
            cout << "  ";
        }

        //nums
        for(int j=0; j<f-i; j++){
            cout << i+1 << " ";
        }
        cout << endl;
    }
//pyramid pattern
    int g=4;

    for(int i=0; i<g; i++){
        //spaces : n-i-1
        for(int j=0; j<g-i-1; j++){
            cout << " ";
        }

        //nums 1 : i+1
        for (int j=1; j<=i+1; j++){
            cout << j << " ";

            //nums 2
            for(int j=i; j>0; j--){
                cout << j << " ";
            }
        }
        cout << endl;
    }
    return 0;
}


