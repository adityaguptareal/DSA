# Pattern 4

## Question
Print the following pattern for a given number of rows `n`:

```
* * * * *
* * * *
* * *
* *
*
```

## Solution (C++)
```cpp
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}
```

## Approach
- Use two nested loops:
  - Outer loop for each row (from n down to 1)
  - Inner loop prints `i` stars for the `i`th row
- Print a newline after each row.

This is a left-aligned inverted triangle pattern using nested loops.