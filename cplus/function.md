// Pass references as parameters to a function.
// Used to change the value of instances
```cpp
void swapNums(int &a, int &b) {
    int c = a;
    a = b;
    b = c
}

int main() {
    int firstNum = 10;
    int secondNum = 20;
    cout << firstNum << secondNum << "\n";

    // Call the function, which will change the values of firstNum and secondNum
    swapNums(firstNum, secondNum);
    cout << firstNum << secondNum << endl;
}
```

// Pass a arrays as parameter

// Define method outside class
```cpp
class Test {
    public: void method();
    public: void example();
};

void Test::method() {
    cout << "Method" << endl;
}

int main() {
    Test t;
    t.method();
}
```