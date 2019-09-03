class Solution {
public:
    string addBinary(string a, string b) {
        int a_index = a.size()-1,b_index = b.size()-1;
        string& add_zero = a_index>=b_index?b:a;
        string zero(a_index>=b_index?a_index-b_index:b_index-a_index,'0');
        add_zero = zero + add_zero;
        int index=a.size()-1;
        while(index>=0)
        {
            if(a[index]=='0'&&b[index]=='0');
            else if(index==0)
            {
                a[index] = a[0] + b[0]-'0';
            }
            else if(a[index]>'1'||(a[index]=='1'&&b[index]=='1'))
            {
                a[index-1]++;
                a[index]=a[index]+b[index]-'2';
            }
            else
                a[index]='1';
            index--;
           // cout<<a<<endl;
        }
        if(a[0]>'1')
        {
            a[0]=a[0]-'2'+'0';
            a='1'+a;
        }
        return a;  
    }
};