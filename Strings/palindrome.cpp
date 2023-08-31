// Online C++ compiler to run C++ program online
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

string filterString(string s){
    string newString="";
    for(int i=0; i<s.length(); i++){
        s[i] = tolower(s[i]);
        if(s[i]>='a' && s[i]<='z'){
            newString+=s[i];
        }
    }
    return newString;
}
bool palindrome(string s){
    string newS = filterString(s);
    int left =0, right = s.length()-1;
    while(left<right){
        if(s[left]!=s[right]){
            return false;
        }
        left++;
        right--;
    }
    return true;
}
int main() {
    // Write C++ code here
    cout<<palindrome("J@ nhavi, Choudhari");

    return 0;
}
