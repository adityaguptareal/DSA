class Solution {
public:
    int maxProduct(int n) {
        int firstHighest = 0;
        int secondHighest = 0;
        while (n != 0) {
            int lastDigit = n % 10;
            if (lastDigit >= firstHighest) {
                secondHighest=firstHighest;
                firstHighest=lastDigit;
            }else if(lastDigit>=secondHighest){
                secondHighest=lastDigit;

            }
            n /= 10;
        }
        return firstHighest * secondHighest;
    }
};
