#include <iostream>
using namespace std;
int main() {
    int n, x;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[100];
    cout << "Enter " << n << " sorted numbers:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "Enter number to search: ";
    cin >> x;
    int pos = -1; 
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            pos = i;
            break;
        }
    }

    if (pos != -1)
        cout << "\nElement found at index " << pos << endl;
    else
        cout << "\nElement not found" << endl;

    return 0;
}