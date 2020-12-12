`void *` is known as "pointer to void type", meaning variables defined as such are pointers to data of an unspecified type, making it similar to `var` in C#.

# C++
## Variables
### Braced initializer
```cpp
int apples {15};
```
A **braced initializer** refers to placing the initial value of a variable in braces. This is a novel style of initialization introduced in **C++11**. Its main advantage is that it will raise a compile-time error if the compiler has to perform a **narrowing conversion** of the value to match the declared type.

Older but equally valid ways of initializing variables:
```cpp
int oranges = 12;
int kiwis(13); // "functional notation"
```
**Zero initialization** refers to initializing a variable with empty braces. It works for any fundamental type, and numeric types initialize to zero.
```cpp
int grapes {}; // 0
```
### Literals
Since **C++14**, you can separate digits in a long integer with a single quote to make it more readable.
```cpp
int num {12'345}; // 12,345
```
Hexadecimal literals are prefixed with "0x" and octals with "0":
```cpp
int hex {0xabcdef};
int oct {0567};
```
