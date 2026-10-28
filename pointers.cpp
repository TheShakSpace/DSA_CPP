#include <iost ream>
#include <vector>
using namespace std;

int main() {
    int a = 10;
    int* ptr = &a; // pointer to integer

    cout << ptr << endl; // prints the address of a
    cout << *ptr << endl; // prints the value of a (10)
    cout << a << endl; // prints the value of a (10)

    //pointer to pointer
    int** ptr2 = &ptr; // pointer to pointer to integer

    //dereferencing pointer to pointer
    cout << ptr2 << endl; // prints the address of ptr
    cout << *ptr2 << endl; // prints the value of ptr (address of a)
    cout << **ptr2 << endl; // prints the value of a (10)   
    return 0;
}