# Pattern 3

## Question
Print the following pattern for a given number of rows `n`:

```
1
2 2
3 3 3
4 4 4 4
5 5 5 5 5
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
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}
```

## Approach
- Use two nested loops:
  - Outer loop for each row (from 1 to n)
  - Inner loop prints the current row number `i`, `i` times
- Print a newline after each row.

This is a left-aligned triangle with repeated row numbers using nested loops.