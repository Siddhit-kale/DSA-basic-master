/** 
problem statement:
Geek is learning a new programming language. As data type forms the most fundamental part of a language, Geek is learning them with focus and needs your help.
Given a data type, help Geek in finding the size of it in byte.

Data Type - Character, Integer, Long, Float and Double

Example 1:

Input: Character
Output: 1
Explaination: For java it would be 2 bytes.
Example 2:

Input: Integer
Output: 4 
*/


// User function Template for C++
#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int dataTypeSize(string str) {
        if (str == "Integer") {
            return 4;
        } else if (str == "Character") {
            return 1;
        } else if (str == "Long") {
            return 8;
        } else if (str == "Float") {
            return 4;
        } else if (str == "Double") {
            return 8;
        } else {
            return -1;
        }
    }
};