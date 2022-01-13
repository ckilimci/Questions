#include <iostream>
#include <map>

/**
 * O(n) -> Time complexity
 * O(n) -> Space complexity
 */
bool checkUnique(std::string s) {
    std::map<char, bool> elements;
    for (int i=0; i<s.length(); i++) {
        if (elements[s[i]]) {
            return false;
        } else {
            elements[s[i]] = true;
        }
    }
    return true;
}

/**
 * O(n^2) -> Time complexity
 * O(1)   -> Space complexity
 */
bool checkUniqueWithoutSpace(std::string s) {
    for(int i=0; i<s.length(); i++) {
        for(int j=i+1; j<s.length(); j++) {
            if (s[i] == s[j]) {
                return false;
            }
        }
    }
    return true;
}

int main(int argc, char const *argv[])
{
    std::cout<< "Question 1.1:" << std::endl;
    std::cout<< "Check the string has all unique characters." << std::endl;

    std::string s = "this is not a unique string.";
    if (checkUnique(s)) {
        std::cout << "Yes, it has." << std::endl;
    } else {        
        std::cout << "No, it has not." << std::endl;
    }

    
    if (checkUniqueWithoutSpace(s)) {
        std::cout << "Yes, it has." << std::endl;
    } else {        
        std::cout << "No, it has not." << std::endl;
    }

    

    return 0;
}
