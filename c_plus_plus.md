https://chatgpt.com/share/67b092d1-8008-8011-bbcf-525d53c3f4a9

1. Hello, World!
```cpp
#include <iostream>
using namespace std;

int main() {
    cout << "Hello, World!" << endl;
    return 0;
}
```

2. Basic Data Types
```cpp
int a = 10;        // Integer
double b = 5.5;    // Floating point
char c = 'A';      // Character
bool d = true;     // Boolean
string e = "Text"; // String
```

3. Operators
```cpp
int x = 10, y = 5;
cout << x + y;  // Addition
cout << x - y;  // Subtraction
cout << x * y;  // Multiplication
cout << x / y;  // Division
cout << x % y;  // Modulus
```

4. Control Flow (if, loops)
```cpp
if (x > y) {
    cout << "X is greater";
} else {
    cout << "Y is greater";
}

for (int i = 0; i < 5; i++) {
    cout << i << " ";
}

while (x > 0) {
    cout << x << " ";
    x--;
}
```
5. Functions
```cpp
int add(int a, int b) {
    return a + b;
}

int main() {
    cout << add(3, 4);
    return 0;
}
```

6. Arrays & Vector

```cpp
// Arrays (Fixed size)
int arr[5] = {1, 2, 3, 4, 5};

// Vector (Dynamic size)
vector<int> vec = {1, 2, 3};
vec.push_back(4); // add element at the end
vec.pop_back(); remove last element


// Loop through vector
for (int i = 0; i < vec.size(); i++) {
    cout << vec[i] << " ";
}

```

7. Pointers & references
Pointer (Memory addresses)
```cpp
#include <iostream>
using namespace std;

int main() {
    int num = 42;
    int* ptr = &num;  // Pointer stores address of num

    cout << "Address: " << ptr << endl;  // Print memory address
    cout << "Value: " << *ptr << endl;   // Dereference pointer (output: 42)

    *ptr = 100;  // Change value using pointer
    cout << "New Value: " << num << endl;  // Output: 100

    return 0;
}
```
& (Address-of operator) gets the memory address of a variable.
* (Dereference operator) accesses the value at the memory address.


References (Alias for variables)
```cpp
int a = 10;
int& b = a; // reference to a

b = 20; // change the value of a
cout << a; // a = 20
```

References act as an alias for a variable.   (act = đóng vai trò / hành động)
Tham chiếu đóng vai trò như một bí danh cho 1 variable
Thay have to initialized when declared


8. Class and Objects
C++ has three access modifiers
public: access out side of class
protected: access inside of the class and sub class (inherited class)
private: inside class

