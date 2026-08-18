class Solution {
public:
    bool isValid(string s) {
        int n=s.length();

        while(true){
            int pos=-1;
            for(int i=0;i<n;i++){
                if(s[i]=='{' && s[i+1]=='}' || s[i]=='(' && s[i+1]==')' || s[i]=='[' && s[i+1]==']'){
                    pos=i;
                    break;
                }
            }
            if(pos==-1) break;
            s.erase(pos,2);
        }
        return s.empty();
    }
};