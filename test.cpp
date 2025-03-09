#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>  // For accumulate()
using namespace std;

// int main() {
//     vector<int> vec;

//     vec.assign({1, 2, 3, 4, 5});

//     // Find an element
//     auto it = find(vec.begin(), vec.end(), 3);
//     if (it != vec.end()) cout << "Found at index " << it - vec.begin() << endl;

//     // Count occurrences of 2
//     cout << "Count of 2: " << count(vec.begin(), vec.end(), 2) << endl;

//     // Sum of elements
//     cout << "Sum: " << accumulate(vec.begin(), vec.end(), 0) << endl;

//     return 0;
// }


class Test {
    public: void method();
    public: void example();
};

void Test::method() {
    cout<< "Method" << endl;
};

int main() {
    Test t;
    t.method();
}