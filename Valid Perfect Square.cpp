// Problem statement
// You have been given an integer ‘N’. You are supposed to find if the given integer ‘N’ is a perfect square or not. A perfect square is an integer that is the square of an integer.

// Detailed explanation ( Input/output format, Notes, Images )
// Constraints:
// 1 <= T <= 50
// 1 <= N <= 10^18

// Time limit: 1 sec
// Sample Input 1:
// 2
// 4
// 7    
// Sample output 1:
// Yes
// No
// Explanation of Sample Output 1:
// In test case 1, since (2 * 2 == 4) so print “Yes”.

// In test case 2, 7 is not a perfect square so print “No”.
// Sample Input 2:
// 2
// 15
// 121
// Sample output 2:
// No
// Yes
// Explanation of Sample Output 2:
// In test case 1, 15 is not a perfect square so print “No”.

// In test case 2, since (11 * 11 == 121) so print “Yes



#include <bits/stdc++.h> 
bool isPerfectSquare(long long n) {
	if(n>0){
		long long x = sqrt(n);
		return (x*x) == n;
	}
	// Write your code here.
}
