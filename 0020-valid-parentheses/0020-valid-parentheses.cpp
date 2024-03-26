class Solution {
public:
    bool isValid(string s) {
        stack<char>r;
        if(s.length()==1)return 0;
        for(auto ele:s){
            if(ele=='('||ele=='{'||ele=='['){
            r.push(ele);
            }
            else{
                if(r.empty()) return 0;
                char c=r.top();
                if(ele=='}'&&c!='{') return 0;
                 if(ele==')'&&c!='(') return 0;
                 if(ele==']'&&c!='[')  return 0;
                 r.pop();
            }
        }
        return r.empty();
    }
};