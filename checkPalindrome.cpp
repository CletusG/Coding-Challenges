#include <iostream>

using namespace std;

bool checkPalindrome(string inputString) {
    int l = inputString.length(); // find out how long the string is
    string start = inputString; // make a copy of it

    for (int i = 0; i < l / 2; i++) {
        //loop through half the string, swap the value of i with the 'inverse' value of i
        //so if your string is 5 chars long, divide it by 2 = 2.5, loop through 2 times because its an int. middle stays the same
        //then take position i (starts at 0) and swap it with the full length of the string minus i minus one, which gives you the char the exact distance apart from i
        //  i   5-0-1 = 4
        //  |---|
        //  aabaa
        //  01234
        swap(inputString[i], inputString[l - i - 1]);
    }

    if (start == inputString) {
        return true;
    }
    else {
        return false;
    }
}

int main() {
    cout << checkPalindrome("aabaa"); // returns True (prints out 1) because aabaa backwards is aabaa
}
