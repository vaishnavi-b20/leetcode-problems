class Solution {
public:
    int maxDepth(string s) {
        int open = 0;
        int depth = 0;
        for (char c : s){
            if( c == '('){
                open++;
                depth = max(depth, open);
            }
            else if(c == ')' && open > 0){
                open--;
            }
        }
        return depth;
    }
};