#include <iostream>
#include <sstream>

using namespace std;

string shrinkString(string s) {
    stringstream ss;
    int count=0;
    char current=0, reg=0;
    for(int i=0; i<s.length(); i++) {
        current = s[i];
        if (current == reg) {
            count++;
            continue;
        } else if (reg != 0) {
            ss << reg << count;
        }
        reg = current;
        count = 1;
    }
    ss << reg << count;
    string result = ss.str();
    if (result.length() < s.length()) {
        return result;
    } 
    return s;
}

int main(int argc, char const *argv[])
{
    cout<< "Question 6:" << endl;
    cout<< "Shrink string with repetitive letters." << endl;

    string s = "aabccccccccccccccccddaab";
    cout << "The original string: " << s << endl;
    cout << "The shrunk string  : " << shrinkString(s) << endl;
    return 0;
}
