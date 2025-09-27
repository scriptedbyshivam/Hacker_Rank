#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;  // Read number of elements
    
    int arr[n];  // Declare array of size n

    // Read n integers into the array
    for (int i = 1; i <=n; i++) {
        cin >> arr[i];
    }

    // Print the array in reverse order
    for (int i = n; i >= 1; i--) {
        cout << arr[i];
        if (i > 0) 
        {
            cout << " ";  // Print space between elements
        }
           
    }
    

    return 0;
}

