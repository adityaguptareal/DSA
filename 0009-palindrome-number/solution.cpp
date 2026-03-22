class Solution {
public:
    bool isPalindrome(int x) {
        int numberCopy=x;
        long reverseDigit=0;
        if (x<0){
            return false;
        }
        while( x!=0){
            int lastDigit = x % 10;
            x=x/10;
           
            reverseDigit=(reverseDigit*10)+lastDigit;
        }
        return (reverseDigit==numberCopy);
      
   
    }
};
