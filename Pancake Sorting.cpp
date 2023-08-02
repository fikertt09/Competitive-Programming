    class Solution {
    public:
        vector<int> pancakeSort(vector<int>& A) {
            vector<int> ans;
            
            
            for(int curmax = A.size(); curmax >= 2; curmax--){
                int index = find(A.begin(), A.end(), curmax) - A.begin();
            
                index += 1;
            
                
                if(index > 1){
                    
                    reverse(A.begin(), A.begin() + index);
                    
                    ans.push_back(index);
                }
                
                if(curmax > 1){
                    reverse(A.begin(), A.begin() + curmax);
                
                    ans.push_back(curmax);
                }
                
            }
            
            return ans;
        }
    };
