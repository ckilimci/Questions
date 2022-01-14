#include <iostream>

/**
 * O(n) -> Time complexity
 * O(1) -> Space complexity
 */
std::string URLify(std::string s, int len) {
    std::string space = "%20";
    int numberOfSpaces = 0;
    for(int i=len-1; i>=0; i--) {
        if(s[i] == ' ') {
            numberOfSpaces++;
        }
    }
    int index = len + 2*numberOfSpaces - 1;
    for(int i=len-1; i>=0; i--) {
        if(s[i] == ' ') {
            s[index] = space[2];
            s[index-1] = space[1];
            s[index-2] = space[0];
            index-=3;
        } else {
            s[index] = s[i];
            index--;
        }
    }
    return s;
}

int main(int argc, char const *argv[])
{
    std::cout<< "Question 1.3:" << std::endl;
    std::cout<< "URLify the given string with replace spaces with %20." << std::endl;

    std::string url = "My John Smith        ";
    int actualLength = 13;

    std::cout << "This is an Input  : " << url << std::endl;
    std::cout << "This is the Output: " << URLify(url, actualLength) << std::endl;

    return 0;
}
