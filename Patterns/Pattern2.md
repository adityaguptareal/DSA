# Pattern 2

## Question
Print the following pattern for a given number of rows `n`:

```
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5
```

## Solution (C++)
```cpp
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}
```

## Approach
- Use two nested loops:
  - Outer loop for each row (from 1 to n)
  - Inner loop prints numbers from 1 to `i` for the `i`th row
- Print a newline after each row.

This is a basic left-aligned triangle with increasing numbers using nested loops.