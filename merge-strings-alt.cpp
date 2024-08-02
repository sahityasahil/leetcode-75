#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

//LEETCODE QUES 1768

string mergeStr(string str1, string str2) {
    int len1 = str1.length();
    int len2 = str2.length();
    int i=0, j=0;
    string ans = "";

    while (i<len1 && j<len2) {
        ans += str1[i++];
        ans += str2[j++];
    }

    while (i<len1) {
        ans += ans.substr(i, len1-i);
    }

    while (j<len2) {
        ans += ans.substr(j, len2-j);
    }

    return ans;
}

int main() {
    string str1 = "abc";
    string str2 = "pqr";

    cout << mergeStr(str1, str2);
    return 0;
}