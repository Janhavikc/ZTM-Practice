class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int longestLen=0, left=0;
        if(s.length()<=1) return s.length();
        map<char, int>seenChar;
        for(int right=0; right<s.length(); right++){     
            int currentChar= s[right];
            int previouslySeen = seenChar.find(currentChar)==seenChar.end()?-1:seenChar[currentChar];
            
                if(previouslySeen >=left){
                    left = previouslySeen+1;
                    cout<<left;
                }
                seenChar[currentChar] = right;
                // cout<<right<<endl;
                // cout<<left;
                longestLen=max(longestLen, (right-left) +1);
        }
        return longestLen;
    }
};
