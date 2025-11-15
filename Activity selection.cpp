#include <iostream>
using namespace std;
int main() {
    int n;
   cout << "Enter number of activities: ";
    cin >> n;
    int start[100], finish[100];
 // Input start and finish times
    for (int i = 0; i < n; i++) {
        cout << "Enter start time of activity " << i + 1 << ": ";
        cin >> start[i];
        cout << "Enter finish time of activity " << i + 1 << ": ";
        cin >> finish[i];
    }
  // Simple selection: choose activities in order entered
    cout << "\nSelected Activities:\n";
    cout << "(" << start[0] << ", " << finish[0] << ")";
    int lastFinish = finish[0];
    int count = 1;
     for (int i = 1; i < n; i++) {
        if (start[i] >= lastFinish) {
            cout << " (" << start[i] << ", " << finish[i] << ")";
            lastFinish = finish[i];
            count++;
        }
    }
   cout << "\nTotal selected: " << count << endl;

    return 0;}
