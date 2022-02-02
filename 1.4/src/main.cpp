#include <iostream>

using namespace std;

bool isPalindrom(string s) {
    // Create a frequency map
    // Frequency should be even. Only 1 element can be odd. Ignore space!
    int freq[128] = {0};
    int val;
    for (int i=0; i<s.length(); i++) {
        val = s[i];
        freq[val]++;
    }
    bool flag = false;
    for (int i=0; i<128; i++) {
        if (freq[i] % 2 != 0) {
            val = ' ';
            if (freq[i] == val) {       // Ignore space
                continue;
            } else if (flag == false) { // Set flag
                flag = true;
            } else {                    // Found second odd char
                return false;
            }
        }
    }
    return true;
}

int main(int argc, char const *argv[])
{
    cout<< "Question 1.4:" << endl;
    cout<< "Check the given string of permutaion is whether polindrom or not." << endl;

    string test="ssaaabcbaaa";
    if (isPalindrom(test)) {
        cout << test << " is polindrom!" << endl;
    } else {
        cout << test << " is NOT polindrom." << endl;
    }

    return 0;
}
