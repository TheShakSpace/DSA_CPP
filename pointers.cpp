#include <iost ream>
#include <vector>
using namespace std;

int main() {
    int a = 10;
    int* ptr = &a; // pointer to integer

    cout << ptr << endl; // prints the address of a
    cout << *ptr << endl; // prints the value of a (10)
    cout << a << endl; // prints the value of a (10)
    return 0;
}