#include <iostream>
#include <string>
using namespace std;
int main() {
    string text, pattern;
 cout << "Enter the main text: ";
    getline(cin, text);
 cout << "Enter the pattern to search: ";
    getline(cin, pattern);
int n = text.size();
int m = pattern.size();
 bool found = false;
// Compute "hash" of pattern (sum of ASCII values)
    int patternHash = 0;
    for (int i = 0; i < m; i++) {
        patternHash += pattern[i];
    }
// Slide over the text
    for (int i = 0; i <= n - m; i++) {
        int windowHash = 0;
        for (int j = 0; j < m; j++) {
            windowHash += text[i + j];
        }
   // If hash matches, check character by character
        if (windowHash == patternHash) {
            bool match = true;
            for (int j = 0; j < m; j++) {
                if (text[i + j] != pattern[j]) {
                    match = false;
                    break;
                }
            }
            if (match) {
                cout << "Pattern found at index " << i << endl;
                found = true;
            }
        }
    }

    if (!found) {
        cout << "Pattern not found in the text." << endl;
    }

    return 0;
}
