#include <bits/stdc++.h>
#include <string>

class Solution {
public:
    bool isPalindrome(string s) {
        int st=0;
        int e=s.length()-1;
        while(e>st){
            while(e>st&&!isalnum(s[st]))st++;
            while(e>st&&!isalnum(s[e]))e--;

            if(tolower(s[e])!=tolower(s[st])) return false;
            st++;
            e--;
        }
        return true;
    }
};