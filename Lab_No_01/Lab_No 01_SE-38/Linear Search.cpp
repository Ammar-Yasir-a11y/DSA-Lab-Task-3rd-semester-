#include <iostream>
using namespace std;

int main() {
    int arr[5] = {15, 8, 23, 42, 4};
    int target, foundIndex = -1;
    
    cout << "Array elements: 15, 8, 23, 42, 4\n";
    cout << "Enter the number you want to search: ";
    cin >> target;
    
    // Check every element one by one
    for(int i = 0; i < 5; i++) {
        if(arr[i] == target) {
            foundIndex = i; 
            break;          
        }
    }
    
    // Check if found or not
    if(foundIndex != -1) {
        cout << "Success! Number found at index " << foundIndex << "." << endl;
    } else {
        cout << "Sorry! Number is not present in the array." << endl;
    }

    return 0;
}
