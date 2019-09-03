class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& A) {
        vector<int> odd;
        vector<int> even;
        for(auto it=A.begin();it!=A.end();it++)
        {
            if(*it%2==1)
                odd.push_back(*it);
            else
                even.push_back(*it);
        }
        even.insert(even.end(),odd.begin(),odd.end());
        return even;
    }
};