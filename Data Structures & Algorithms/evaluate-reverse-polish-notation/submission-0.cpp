class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        int n = tokens.size();
stack<int>st;
        for(int i =0; i<n; i++){
           string num = tokens[i];

           if(num != "+" && num!= "*" && num!= "/" && num!= "-"){
            st.push(std::stoi(num));
           }else{
            int b = st.top();
            st.pop();
            int  a = st.top();
            st.pop();

            int result;

            if(num == "+"){
                result= a+b;
            }else if(num == "-"){
                result = a-b;
            }else if(num == "/"){
                result = a/b;
            }else {
                result = a*b;
            }
st.push(result);
           }

        }
        return st.top();
    }
};
