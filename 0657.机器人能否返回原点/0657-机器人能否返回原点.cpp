class Solution {
public:
    bool judgeCircle(string moves) {
        int R=0,L=0,U=0,D=0;  
        for(char i :moves)
        {
            if(i=='R')
                R++;
            else if(i=='L')
                L++;
            else if(i=='U')
                U++;
            else if(i=='D')
                D++;        
        }
        if(R==L&&U==D)
            return true;
        else
            return false;
    }
};