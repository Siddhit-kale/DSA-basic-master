/** 
 Problem statement: Pass by Reference and Value 
Geek is learning about functions and calling a function with arguments. He learns that passing can take one of two forms: pass by value or pass by reference.

Geek wishes to add 1 and 2, respectively, to the parameter passed by value and reference. Help Geek in fulfilling his goal.

Example 1:

Input:
a = 1
b = 2
Output:
2 4
Explanation: 1 was passed by value whereas 2 passed by reference.
Example 2:

Input:
a = 10
b = 20
Output: 11 22
Explanation: 10 was passed by value whereas 20 passed by reference.
*/

#include <iostream>
#include <vector>
using namespace std;

class Solution {
  public:
    vector<int> passedBy(int a, int &b) {
        a += 1; 
        b += 2; 
        return {a, b}; 
    }
};

int main() {
    int a = 1, b = 2; 
    Solution obj;
    vector<int> result = obj.passedBy(a, b); 
    cout << result[0] << " " << result[1] << endl;

    return 0;
}
