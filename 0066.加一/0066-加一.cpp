class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int index = digits.size()-1;
        digits[index]++;
        while(digits[index]==10&&index > 0)
        {
            digits[index] = 0;
            digits[--index]++;
        }
        if(digits[0]==10)
        {
            digits[0] = 0;
            digits.insert(digits.begin(),1);
        }
        return digits;
    }
};