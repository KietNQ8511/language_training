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