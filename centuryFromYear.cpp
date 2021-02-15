#include <iostream>

using namespace std;

int centuryFromYear(int year) {
    int result;
    
    if (year % 100 == 0) {
        result = year / 100;
    }
    else {
        result = year / 100 + 1;
    }
    //return result;
    cout << result << endl;
}

int main() {
    centuryFromYear(1905); // returns 20
}
