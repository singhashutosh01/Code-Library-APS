bool isSubsequence(string s, string t) {
        queue<char> q;
        for(int i=0;i<s.length();i++){
            q.push(s[i]);
        }
        for(int i=0;i<t.length();i++){
            if(t[i]==q.front()){
                q.pop();
            }
        }
        if(q.size()==0)
            return true;
        else
            return false;
    }
