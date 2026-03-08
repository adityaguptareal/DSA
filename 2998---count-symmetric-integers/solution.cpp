class Solution {
public:
    int digitCount(int x) {
        int digit = 0;
        while (x != 0) {
            x /= 10;
            digit++;
        }
        return digit;
    }

    int countSymmetricIntegers(int low, int high) {

        int count = 0;
        for (int num = low; num <= high; num++) {
            if (digitCount(num) % 2 != 0)
                continue;
            int numCopy = num;
            int numLength = digitCount(num);
            int sumFirstHalf = 0, sumLastHalf = 0;
            for (int j = 0; j < numLength / 2; j++) {
                sumFirstHalf += numCopy % 10;
                numCopy /= 10;
            }
            for (int j = 0; j < numLength / 2; j++) {
                sumLastHalf += numCopy % 10;
                numCopy /= 10;
            }
            if (sumFirstHalf == sumLastHalf) {
                count++;
            }
        }
        return count;
    };
};
