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


// Constructor
