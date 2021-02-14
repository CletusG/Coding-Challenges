#include <algorithm>
#include <cmath>

using namespace std;

int main()
{
    int a[] = { 4, 32, 2, 67, 99, 43 };

    // size of = how many bytes. In this case 4 since integers are typically 4 bytes (32 bits)
    int n = sizeof(a) / sizeof(a[0]);
    // so using 4 would actually work instead of sizeof(a[0])

    // now n = number of objects in array, which is 6

    cout << "[i] Number of items in array: " << n << endl;

    //cout << sizeof(a[0]); = 4

    sort(a, a + n);

    for (int i = 0; i < n; i++)
    {
        cout << "[" << i << "]: " << a[i] << endl;
    }

    return 0;
}
