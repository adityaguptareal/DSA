# Pattern 6

## Question
Print the following pattern for a given number of rows `n`:

```
    1
   12
  123
 1234
12345
```

## Solution (C++)
```cpp
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        for (int j = 1; j <= i; j++) {
            cout << j;
        }
        cout << endl;
    }
    return 0;
}
```

## Approach
- Use two nested loops for each row:
  - First inner loop prints spaces (`n-i` spaces)
  - Second inner loop prints numbers from 1 to `i`
- Print a newline after each row.

This creates a right-aligned triangle with increasing numbers using spaces and numbers.