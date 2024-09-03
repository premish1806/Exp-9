#include <iostream>
using namespace std;
int main()
{
    int a = 10;
    int *ptr;
    ptr = &a;
    cout << "The value pointed by *ptr is: " << *ptr << endl;
    cout << "The value in a is: " << a << endl;
    cout << "The value in pointer variable ptr is: " << (void*)ptr << endl;
    cout << "The address of variable a is: " << &a << endl;
    ptr++;
    cout << "After increment, the value in pointer variable ptr is: " << (void*)ptr << endl;
}
