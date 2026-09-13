class Solution {
public:
    int calculate(string s) {
        long cur=0;
        long res=0;
        int sign=1;
        stack <int> st;
        for(auto ch: s){
            if(isdigit(ch)){
                cur = cur*10 + (ch - '0');
            }
            else if(ch == '+'){
                res += cur*sign;
                cur=0;
                sign=1;
            }
            else if(ch == '-'){
                res += cur*sign;
                cur=0;
                sign=-1;
            }
            else if(ch == '('){
                st.push(res);
                st.push(sign);
                res=0;
                cur=0;
                sign=1;
            }
            else if(ch== ')'){
                res+= cur*sign;
                cur=0;
                res *= st.top(); st.pop();
                res += st.top(); st.pop();
            }
        }
        res += cur*sign;
        return (int)res;
    }
};