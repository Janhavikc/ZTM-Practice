class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int longestLen=0;
        for(int left=0; left<s.length(); left++){
            map<char, bool>currentChar;
            int currentLength=0;
            for(int right=left; right<s.length(); right++){
                if(currentChar.find(s[right])==currentChar.end()){
                    currentChar[s[right]] = true;
                    currentLength++;
                    longestLen = max(longestLen, currentLength);
                }else{
                    break;
                }
            }
        }
        return longestLen;
    }
};
