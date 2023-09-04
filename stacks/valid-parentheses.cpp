class Solution {
public:
    bool isValid(string s) {
        map<char,char>parentheses;
        parentheses['{']='}';
        parentheses['(']=')';
        parentheses['[']=']';
       
        if(s.length()==0) return true;
        stack<char>st;
        for(int i=0; i<s.length(); i++){
            if(parentheses[s[i]]){
                st.push(s[i]);
            }else if(st.size()==0){
                //if stack is empty becoz it starts with ']'
                return false;
            }else{
                char leftPar=st.top();
                st.pop();
                char currentPar = parentheses[leftPar];
                if(s[i]!=currentPar) return false;
            }
        }
        return st.size()==0;
    }
};
