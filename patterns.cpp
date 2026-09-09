#include <iostream>
using namespace std;
int main(){
    int n=5;
    for(int i=1; i<=n; i++){
     for(int j=1; j<=n; j++){
      cout << j << " ";
     }
     cout << endl;
    }

    //next pattern
    int a=4;
    for(int i=1; i<=a; i++){
        char ch = 'A';
        for(int j=1; j<=a; j++){
            cout << ch << " ";
            ch= ch+1;
        }
        cout << endl;

    }

    int b=4;
    int num=1;
    for (int i=0; i<b; i++){
for (int j=0; j<b; j++){
    cout << num << " ";
    num++;
}
cout << endl;
    }

    int c=3;
    char ch = 'A';
    for (int i=0; i<c; i++){
        for (int j=0; j<c; j++){
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }
    return 0;
}