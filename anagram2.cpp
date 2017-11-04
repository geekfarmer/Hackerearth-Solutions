// C++ program to find minimum number of characters
// to be removed to make two strings anagram.
#include<bits/stdc++.h>
using namespace std;
const int CHARS = 26;

// function to calculate minimum numbers of characters
// to be removed to make two strings anagram
int remAnagram(string str1, string str2)
{
    // make hash array for both string and calculate
    // frequency of each character
    int count1[CHARS] = {0}, count2[CHARS] = {0};

    // count frequency of each charcter in first string
    for (int i=0; str1[i]!='\0'; i++)
        count1[str1[i]-'a']++;

    // count frequency of each charcter in second string
    for (int i=0; str2[i]!='\0'; i++)
        count2[str2[i]-'a']++;

    // traverse count arrays to find number of charcters
    // to be removed
    int result = 0;
    for (int i=0; i<26; i++)
        result += abs(count1[i] - count2[i]);
    return result;
}

// Driver program to run the case
int main()
{
    string str1 = "bcadeh", str2 = "hea";
    cout << remAnagram(str1, str2);
    return 0;
}
