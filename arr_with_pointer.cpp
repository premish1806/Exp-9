// Premish Ninawe
// 23070123092
// ENTC B1
#include <iostream>
using namespace std;
int main()
{
    int a[6] = {1, 8, 0, 6, 0, 4};
    int *ptr = a;
    for (int i = 0; i < 6; i++)
    {
        cout << "Element " << i + 1 << " = " << *(ptr + i) << endl;
    }
}
