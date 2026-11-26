#include <iostream>
using namespace std;

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int n = 5;
    int pos = 1; 

    int* target = arr + pos; // address of element at index pos
    int* end = arr + n;      // one past the last active element

    // Shift elements left starting from the target address
    for (int* p = target; p < end - 1; ++p) {
        *p = *(p + 1);
    }
    n--;

    cout << "Length after deleting: " << n << endl;
    for (int i = 0; i < n; i++) {
        cout << "Index " << i << " : " << arr[i] << endl;
    }

    return 0;
}
