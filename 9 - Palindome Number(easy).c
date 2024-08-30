/*Given an integer x, return true if x is a 
palindrome
, and false otherwise. 

Example 1:

Input: x = 121
Output: true
Explanation: 121 reads as 121 from left to right and from right to left.
Example 2:

Input: x = -121
Output: false
Explanation: From left to right, it reads -121. From right to left, it becomes 121-. Therefore it is not a palindrome.
Example 3:

Input: x = 10
Output: false
Explanation: Reads 01 from right to left. Therefore it is not a palindrome.
 

Constraints:

-231 <= x <= 231 - 1
*/

bool isPalindrome(int x) {
    if(x < 0)
        return false;
    if (x == 0)
        return true;

    int n = log10(x) + 1;
    int ponteiro = n/2;
    int l = (int) pow(10, n-1), r = 1;
    while(ponteiro--) {
        if ((x/l)%10!=(x/r)%10){
            return false;
        }
        l /=10;
        r *=10;
    }
    return true;
}
