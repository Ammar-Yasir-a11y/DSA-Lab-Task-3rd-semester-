#include <iostream>
using namespace std;

int main() {
    int numbers[5]; 
    
    // take input from the user
    cout << "Enter 5 numbers:\n";
    for(int i = 0; i < 5; i++) {
        cout << "Number " << i + 1 << ": ";
        cin >> numbers[i];
    }
    
    //  to display the numbers back to the user
    cout << "\nYou entered: ";
    for(int i = 0; i < 5; i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    return 0;
}
