class Solution {
public:
    vector<int> partitionLabels(string S) {
        map<char,int> lettertable;
        vector<int> partition;
        int Ssize=S.size();
        int begin=0,end=0;
        for(int i=0;i<Ssize;i++)
            lettertable[S[i]]=i;
        for(int i=0;i<Ssize;i++)
        {
            end=max(end,lettertable[S[i]]);
            if(end==i)
            {
                partition.push_back(end-begin+1);
                begin=end+1;
            }
        }
        return partition;
    }
};