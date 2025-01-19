/**
problem statement:
Given an integer choice denoting the choice of the user and a list containing the single value R or two values L and B depending on the choice.
If the user's choice is 1, calculate the area of the circle having the given radius(R).  
Else if the choice is 2, calculate the area of the rectangle with the given length(L) and breadth(B).

Note : A list arr[], containing the single value R or the two values L and B, as input parameters. Return the area of the desired geometrical figure. Use Math.PI for the value of pi.

Examples :

Input: choice = 1, R = 5
Output: 78.53981633974483
Explaination: The choice is 1. So we have to calculate the area of the circle.
Input: choice = 2, L = 5, B = 10
Output: 50
Explaination: Here we have to calculate the area of the rectangle.
*/

// User function Template for C++
#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    double switchCase(int choice, vector<double> &arr) {
        if (choice == 1) {
            return M_PI * arr[0] * arr[0];
        } else if (choice == 2) {
            return arr[0] * arr[1];
        } else {
            return -1;
        }
    }
};
