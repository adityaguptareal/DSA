# Pattern 7

## Question
Print the following pattern for a given number of rows `n`:

```
    *
   ***
  *****
 *******
*********
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
        for (int j = 1; j <= 2 * i - 1; j++) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
```

## Approach
- Use two nested loops for each row:
  - First inner loop prints spaces (`n-i` spaces)
  - Second inner loop prints stars (`2*i-1` stars)
- Print a newline after each row.

This creates a centered pyramid pattern using spaces and stars.