#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >>n;
    int arr[n];
    cout<<"Enter"<<n<<"elements:";
    for(int i=0;i<n;i++)
    cin>>arr[i];
    cout<<"Original array:";
   for(int i = 0; i<n; i++)
   cout<< arr[i]<<" ";
   cout<<endl;
   for(int i=1;i<n;i++){
    int x = arr[i];
    int j=i-1;
    while (j>=0 && arr[j]>x){
        arr[j +1]= arr[j];
        j--;
    }
    arr[ j + 1] = x;
   }
   cout<<"Sorted array: ";
   for(int i =0; i<n; i++)
   cout << arr[i]<<" ";
   cout << endl;
   return 0;
}