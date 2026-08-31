class Solution {
public:

    string encode(vector<string>& strs) {
  string res = "";
   for(string s: strs){
    res+=to_string(s.length());
    res+="#";
    res+=s;

   }
   return res;
    
    }

    vector<string> decode(string s) {
    vector<string>res;
int i =0;

while(i<s.length()){
int j = i;

 while(s[j] != '#'){
    j++;
 }

 int len = stoi(s.substr(i, j-i));

 j++;
  string str = s.substr(j , len);

  res.push_back(str);

  i = j+len;
}
return res;



    }
};
