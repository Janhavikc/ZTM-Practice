string minRemoveToMakeValid(string s) {
        string ans="";
        stack<int>st;
        for(int i=0;i<s.length(); i++){
            if(s[i]=='('){
                st.push(i);
            }else if(st.size()&&s[i]==')'){
                st.pop();
            }else if(s[i]==')'){
                s[i]='*';
            }
        }
        while(st.size()){
            int t = st.top();
            st.pop();
            s[t]='*';
        }
        for(int i=0; i<s.length(); i++){
            if(s[i]!='*')
            ans+=s[i];
        }    
        return ans;
    }
