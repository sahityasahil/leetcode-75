#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

// LEETCODE QUES 1431

vector<bool> kidsWithCandies(vector<int> &candies, int extraCandies)
{
    int n = candies.size();
    vector<bool> ans;
    int maxElement = *max_element(candies.begin(), candies.end());
    // max element in a vector can be found by an inbuilt function
    // *max_element(first_index, last_index)
    for (int i = 0; i < n; i++)
    {
        if (candies[i] + extraCandies >= maxElement)
        {
            ans.push_back(true);
        }
        else
        {
            ans.push_back(false);
        }
    }
    return ans;
}

int main()
{
    int a = 6, b = 5, c = 2, d = 1;
    cout << max(a, b);
    // int arr[5] = {2,4,7,5,9};
    // cout << max(arr.begin(), arr.end());

    return 0;
}