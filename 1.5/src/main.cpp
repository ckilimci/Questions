#include <iostream>

using namespace std;

bool oneStepAway(string s1, string s2) {
    int diff = s1.length() - s2.length();
    if (diff > 1 || diff < -1) {
        return false;
    }
    int i=0, j=0;
    bool flag = false;
    while (i<s1.length() && j<s2.length()) {
        if (s1[i] == s2[j]) {
            i++;
            j++;
        } else if (flag) {
            // Already used flag
            return false;
        } else {
            // Missing or different letter
            flag = true;
            if (diff == 0) {
                // different letter
                i++;
                j++;
            } else if (diff < 0) {
                // s2 has more letter
                j++;
            } else {
                // s1 has more letter
                i++;
            }
        }        
    }
    if (i != s1.length() || j != s2.length()) {
        // There is one more letter that did not proceed, yet
        // If we set flag previously, too bad! If not, we can use is now.
        return !flag;
    }
    // No more letter left. Even the flag is set, strings are fine.
    return true;
}

int main(int argc, char const *argv[])
{
    cout<< "Question 1.5:" << endl;
    cout<< "Determine that given two strings are one step away from each other." << endl;
    cout<< "Steps types could be add, remove or change one letter." << endl << endl;

    string s1 = "pale";
    string s2 = "pales";
    if (oneStepAway(s1, s2)) {
        cout << s1 << " and " << s2 << " are at most one step away." << endl;
    } else {
        cout << s1 << " and " << s2 << " are so different!" << endl;
    }

    return 0;
}
