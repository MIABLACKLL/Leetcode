class Solution {
public:
    string intToRoman(int num) {
        string romannum="";
        vector<char> romanletter={'I','V','X','L','C','D','M'};     
       for(int i=0;i<8&&num>0;i+=2)
       {
           int eachbit=num%10;
           num/=10;
           if(eachbit<4)
                for(int j=0;j<eachbit;j++)  romannum+=romanletter[i];
           else if(eachbit==4)
           {
               romannum+=romanletter[i+1];
               romannum+=romanletter[i];
           }
           else if(eachbit<9)
           {
               for(int j=0;j<eachbit%5;j++)  romannum+=romanletter[i];
               romannum+=romanletter[i+1];
           }
           else
           {
               romannum+=romanletter[i+2];
               romannum+=romanletter[i];
           }
       }
        reverse(romannum.begin(),romannum.end());
        return romannum;
    }
};