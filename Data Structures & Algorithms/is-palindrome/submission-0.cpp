class Solution {
public:
    string cleanstring(string s){
        string res = "";
        for(char c: s){
            if(isalnum(c)){
                res+=tolower(c);
            }
        }
        return res;
    }

    bool isPalindrome(string s) {
        string str = cleanstring(s);
        int l= 0;
        int h= str.size()-1;

        while(l<h){
            if(str[l]!=str[h]){
                return false;
            }else{
                l++;
                h--;
            }
        }
        return true;
    }
};
