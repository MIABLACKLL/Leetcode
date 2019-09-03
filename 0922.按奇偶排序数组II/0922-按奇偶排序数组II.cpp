class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& A) {
        int add=1,even=0;
        int size=A.size();
        do{
            while((A[even]%2==0)&&(even+=2)&&even<size+2);
            while(A[add]%2==1&&(add+=2)&&add<size+1);
            if(even<size+2&&add<size+1)
                swap(A[even],A[add]);          
        }while(even<size);
        return A;
    }
};