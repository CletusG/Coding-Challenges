#include <iostream>

using namespace std;

void count_bits(int n)
{
    int ret = 0;
    while (n)
    {
        ret += n & 1;
        n >>= 1;
    }
    cout << ret << endl;
}

int main()
{
    count_bits(4); // put number here

    return 0;
}
