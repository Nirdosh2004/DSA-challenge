class Solution {
public:
    string removeOuterParentheses(string s) {

        //TC = O(N)
        //SC = O(N)

        string ans = "" ;  //it stores the final answer
        string rest = "";  //it stores the all parentheses until count == 0
        int count = 0;     //it counts the parentheses 
        
        for(auto it : s)
        {
            if(it == '(')
            {
                count++;         
                rest.push_back(it);
            }
            else if(it ==')')
            {
                count--;
                rest.push_back(it);
                if(count == 0) //means one parenthes is full means initial and last of it 
                {
                    rest.pop_back();  //remove last bracet
                    rest.erase(rest.begin());  //remove first bracet
                    ans += rest;       //add rest of it 
                    rest.clear();      //delete all rest to start from new 
                }
            }
        }
        return ans;
    }
};
