class Solution {
public:
    int maxArea(vector<int>& height) {
        if(height.size()==2)
            return height[0]<=height[1]?height[0]:height[1];
        int left=0;
        int right=height.size()-1;
        int area=0;
        while(left!=right)
        {
            if(height[left]>height[right])
            {
                area=max(area,height[right]*(right-left));
                right--;    
            }
            else
            {
                area=max(area,height[left]*(right-left));
                left++;    
            }      
        }
        return area;
        
    }
};