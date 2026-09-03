class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n = heights.size();
       

        int l = 0;
        int h = n-1;
        int maxi =0;
        while(l<h){
            int height = min(heights[l], heights[h]);
         int width = h-l;

         int area = height*width;
          maxi = max(maxi , area);
              if(heights[l]< heights[h]){
                l++;
              }else{
                h--;
              }
        }
        return maxi;
    }
};
