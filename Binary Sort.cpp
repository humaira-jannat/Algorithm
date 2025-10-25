#include <iostream>
using namespace std;
int main() {
    int n, key;
    cout << "Enter size of array: ";
    cin >> n;
   int arr[100];
    cout << "Enter " << n << " numbers (unsorted):\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];}
 cout << "Enter number to search: ";
    cin >> key;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
   cout << "\nArray after sorting: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
    int low = 0, high = n - 1, mid, pos = -1;
    while (low <= high) {
        mid = (low + high) / 2;
        if (arr[mid] == key) {
            pos = mid;
            break;
        } else if (arr[mid] < key) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    if (pos != -1)
        cout << "\nFound at index " << pos << " (after sorting)" << endl;
    else
        cout << "\nNot found" << endl;

    return 0;
}
