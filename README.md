# Exp-9 Pointers in C++

## Aim:To understand the concept of pointers in C++ by declaring and initializing pointers of different data types, and accessing arrays using pointers and without using pointers.

## Software Used:
- Dev c++
  
## Theory:
Pointers are variables that store the memory address of another variable. In C++, pointers can be of various data types, such as int, float, and char, which determine the type of data the pointer can point to. By using pointers, we can directly access and manipulate the memory location of variables. This is particularly useful in dynamic memory allocation and when dealing with arrays and strings.

The primary difference between accessing arrays using pointers and without pointers lies in the method of accessing elements. When using pointers, the elements of the array are accessed through pointer arithmetic, where the pointer is incremented to traverse the array. Without pointers, array elements are accessed directly using their indices. Understanding how to work with pointers in different scenarios is essential for efficient memory management and optimized code in C++.

## Program 1: Declare and initialize pointers of different data types and print the following values (Repeat for float and char data types).

<strong> Code 1A: INT </strong>
<br>
```cpp
// Premish Ninawe
// 23070123092
// ENTC B1
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
```
<strong> Output: </strong>
<br>


<strong> Code 1B: Float </strong>
<br>
```cpp
// Premish Ninawe
// 23070123092
// ENTC B1
#include <iostream>
using namespace std;
int main()
{
    float a = 10.5;
    float *ptr;
    ptr = &a;
    cout << "The value pointed by *ptr is: " << *ptr << endl;
    cout << "The value in a is: " << a << endl;
    cout << "The value in pointer variable ptr is: " << (void*)ptr << endl;
    cout << "The address of variable a is: " << &a << endl;
    ptr++;
    cout << "After increment, the value in pointer variable ptr is: " << (void*)ptr << endl;
}
```
<strong> Output: </strong>
<br>



<strong> Code 1C: Char </strong>
<br>
```cpp
// Premish Ninawe
// 23070123092
// ENTC B1
#include <iostream>
using namespace std;
int main()
{
    char a = 'c';
    char *ptr;
    ptr = &a;
    cout << "The value pointed by *ptr is: " << *ptr << endl;
    cout << "The value in a is: " << a << endl;
    cout << "The value in pointer variable ptr is: " << (void*)ptr << endl;
    cout << "The address of variable a is: " << &a << endl;
    ptr++;
    cout << "After increment, the value in pointer variable ptr is: " << (void*)ptr << endl;
}
```
<strong> Output: </strong>
<br>



## Program 2:Access array using pointer and without using pointer variable.

<strong> Code 2A: Access Array with Pointer </strong>
<br>
```cpp
// Premish Ninawe
// 23070123092
// ENTC B1
#include <iostream>
using namespace std;
int main()
{
    int a[5] = {1, 2, 4, 8, 9};
    int *ptr = a;
    for (int i = 0; i < 5; i++)
    {
        cout << "Element " << i + 1 << " = " << *(ptr + i) << endl;
    }
}
```
<strong> Output: </strong>
<br>

<strong> Code 2B: Access Array without Pointer </strong>
<br>
```cpp
// Premish Ninawe
// 23070123092
// ENTC B1
#include <iostream>
using namespace std;
int main()
{
    int a[5] = {1, 2, 4, 8, 9};
    for (int i = 0; i < 5; i++)
    {
        cout << "Element " << i + 1 << " = " << a[i] << endl;
    }
}
```
<strong> Output: </strong>
<br>

##Conclusion: 
Through these programs, we learned how to declare and initialize pointers for different data types and how to access array elements using pointers and without pointers. Understanding pointer arithmetic and memory addressing is crucial for effective C++ programming.







