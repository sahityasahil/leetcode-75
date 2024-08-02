#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

// LEETCODE QUES 1071
/* Logic: If there exists any GCD of two strings s1 and s2, then ((s1+s2) == (s2+s1))
// basically if we append the first string either towards the left or towards the right,
the result will be the same.
Same goes the logic if we think from s2's perspective.
*/

string gcdOfString(string s1, string s2)
{
    if ((s1 + s2) == (s2 + s1))
    {
        string ans = s1.substr(0, __gcd(s1.length(), s2.length())); // gcd is an inbuilt function in cpp
        return ans;
    }
    return "";
}

int main()
{
    string s1 = "AB";
    string s2 = "ABABAB";
    cout << gcdOfString(s1, s2);
    return 0;
}