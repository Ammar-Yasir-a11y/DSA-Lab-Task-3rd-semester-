#include <iostream>
using namespace std;

int main() {
    
    int arr[6] = {2, 5, 8, 12, 16, 23}; 
    int target;
    
    cout << "Sorted Array: 2, 5, 8, 12, 16, 23\n";
    cout << "Enter the number you want to search: ";
    cin >> target;
    
    int low = 0;
    int high = 5;
    int foundIndex = -1;
    
    while(low <= high) {
        int mid = low + (high - low) / 2; 
        
        if(arr[mid] == target) {
            foundIndex = mid; 
            break;
        }
        else if(arr[mid] < target) {
            low = mid + 1;    // Right side mein dekho
        }
        else {
            high = mid - 1;   // Left side mein dekho
        }
    }
    
    // Result dikhana
    if(foundIndex != -1) {
        cout << "Success! Number found at index " << foundIndex << "." << endl;
    } else {
        cout << "Sorry! Number not found in the array." << endl;
    }

    return 0;
}
