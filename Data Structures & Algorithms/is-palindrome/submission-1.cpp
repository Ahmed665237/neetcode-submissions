class Solution {
public:
    bool isPalindrome(string s) {
        string s1;
        for(int i=0;i<s.size();i++){
        if(isalnum(s[i]))
                s1+=s[i];
        }
        for(int i=0;i<s1.size();i++){
            s1[i]=tolower(s1[i]);
        }
        int l=0,r=s1.size()-1;
        for(int i=0;i<s1.size()/2;i++){
            if(s1[l]!=s1[r])
                return false;
            l++;
            r--;
        }
        return true;
    }
};
