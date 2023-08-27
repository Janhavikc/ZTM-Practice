class Solution {
public:
    string filterString(string s){
        string ans="";
        vector<char> newString;
        for(int i=0;i<s.length(); i++){
            if(s[i]=='#' && newString.size()>0) newString.pop_back();
            else if(s[i]!='#') newString.push_back(s[i]);
        }
        for(auto x:newString){
            ans+=x;
        }
        cout<<ans<<endl;
        return ans;
    }
    bool backspaceCompare(string s, string t) {
        string newS = filterString(s);
        string newT = filterString(t);
        if(newS==newT) return true;
        return false;
    }
};
