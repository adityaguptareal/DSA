class Solution {
public:
    int squareNumber(int n) {
        int sum = 0;
        while (n > 0) {
            int digit = n % 10;
            n /= 10;
            sum += digit * digit;
        }
        return sum;
    }
    bool isHappy(int n) {
        int fast = n;
        int slow = n;
        while (fast != 1) {
            slow = squareNumber(slow);
            fast = squareNumber(fast);
            fast = squareNumber(fast);
            if (slow == fast and slow != 1) {
                return false;
            }
        }
        // fast=1;
        return true;
    }
};
