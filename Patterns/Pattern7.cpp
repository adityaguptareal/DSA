#include <iostream>
using namespace std;


//     *    
//    ***   
//   *****  
//  ******* 
// *********


// Approach 1
void printPattern(int n)
{
    for (int i = 1; i <= n; i++)
    {
        // space before the stars
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        // star
        for (int k = 1; k <= 2*i-1; k++)
        {
            cout << "*";
        }
        // space after star
        for (int l = 1; l <=n-i; l++)
        {
            cout << " ";
        }
        

        cout << endl;
    }
}

int main()
{

    printPattern(5);
    return 0;
}