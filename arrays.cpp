//find smallest/largest in arrays
#include <climits>   //for INT_MAX AND INT_MIN
#include <iostream>
using namespace std;
int main(){
    int nums[] = {5,15,22,1,-15,-24};
    int size = 6;

    int smallest = INT_MAX;
    int largest = INT_MIN;
    for(int i=0; i<size; i++){
        if(nums[i] < smallest){
            smallest = nums[i];
        }
        if(nums[i] > largest){
            largest = nums[i];
        }
    }
    cout << "Smallest: " << smallest << endl;
    cout << "Largest: " << largest << endl;
    return 0;
}