#include <iostream>
using namespace std;
void merge(int arr[], int left, int mid, int right) { //  sorted array merge and conqure according ascending order
    int n1 = mid - left + 1;  // sub- array
    int n2 = right - mid;     
    int L[n1], R[n2]; //temporary array
    for (int i = 0; i < n1; i++)
        L[i] = arr[left + i];
    for (int j = 0; j < n2; j++)
        R[j] = arr[mid + 1 + j];
    int i = 0, j = 0, k = left;

    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {  
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    while (i < n1) {
        arr[k] = L[i];
        i++; k++;
    }
    while (j < n2) {
        arr[k] = R[j];
        j++; k++;
    }
}
void mergeSort(int arr[], int left, int right) { // divide the array in two parts left and right
    if (left < right) {
        int mid = (left + right) / 2;   
        mergeSort(arr, left, mid);      
        mergeSort(arr, mid + 1, right); 
        merge(arr, left, mid, right);   
    }
}
int main() {
    int arr[] = {38, 27, 43, 3, 9, 82, 10};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    mergeSort(arr, 0, n - 1);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}