#include <iostream>

// using simple math, you can determine whether the number is odd or even.

using namespace std;

int main()
{
    int num;

    cout << "Enter a number: ";
    cin >> num;

    if (num % 2 == 0)
    {
        cout << "Your number " << num << " is even" << endl;
    }
    else
    {
        cout << "Your number " << num << " is odd" << endl;
    }

    return 0;
}
