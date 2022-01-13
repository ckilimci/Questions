#include <iostream>
#include <map>

/**
 * O(n) -> Time complexity
 * O(n) -> Space complexity
 */
bool checkPermutation(std::string s1, std::string s2) {
    if (s1.length() != s2.length()) {
        return false;
    }
    std::map<char, int> elements;
    for (int i=0; i<s1.length(); i++) {
        elements[s1[i]] ++;
        std::cout << "elements[" << s1[i] << "]=" << elements[s1[i]] << std::endl;
    }
    for (int i=0; i<s2.length(); i++) {
        elements[s2[i]] --;
        std::cout << "elements[" << s2[i] << "]=" << elements[s2[i]] << std::endl;
        if (elements[s2[i]] < 0) {
            return false;
        }
    }
    return true;
}

int main(int argc, char const *argv[])
{
    std::cout<< "Question #2:" << std::endl;
    std::cout<< "Check two strings whether they are permutation's of each other or not" << std::endl;

    std::string s1 = "aaabc";
    std::string s2 = "caaab";

    if (checkPermutation(s1, s2)) {
        std::cout << "Yes, they are." << std::endl;
    } else {
        std::cout << "No, they are not." << std::endl;
    }

    return 0;
}
