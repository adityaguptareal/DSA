class Solution {
public:
    bool canAliceWin(int n) {
        for (int i = 10; i > 1; i--) {
            if (i > n) {
                return i % 2;
            }
            n = n - i;
        }
        return false;

    }
};
