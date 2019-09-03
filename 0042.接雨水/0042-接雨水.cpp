class Solution {
public:
    int trap(vector<int>& height) {
        if(height.size()<=2)
            return 0;
        int rainArea=0,slotLeft=0,slotRight=0,size=height.size();
        bool endSignal=false;
        while(slotLeft<size-1&&height[slotLeft]<=height[slotLeft+1])slotLeft++;
        if(size-1==slotLeft)
            return 0;
        slotRight=slotLeft+1;
        //cout<<"!";
        for(int i=slotLeft;i<size;i++)
        {
            int maxHeight=slotRight;
            while(slotRight<size-1&&(height[slotLeft]>height[slotRight]||height[slotRight]<=height[slotRight+1]))
            {
                slotRight++;
                if(height[maxHeight]<=height[slotRight])
                    maxHeight=slotRight;
            }
            if(slotRight!=maxHeight)
                slotRight=maxHeight;
            //cout<<slotRight<<" "<<slotLeft<<endl;
            int waterHeight=min(height[slotRight],height[slotLeft++]);
            //cout<<waterHeight<<endl;
            while(slotLeft<slotRight)
            {
                if(waterHeight-height[slotLeft]<0)
                {
                    slotLeft++;
                    continue;
                }
                rainArea+=(waterHeight-height[slotLeft++]);
            }
            //cout<<rainArea<<endl;
            i=slotRight++;
            if(endSignal)
                break;
        }
        return rainArea;
    }
};