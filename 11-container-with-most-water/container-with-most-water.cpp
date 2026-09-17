class Solution {
public:
    int maxArea(vector<int>& height) {
        int leftPointer=0;
        int rightPointer=height.size()-1;
        int maxwater=0;
        while(leftPointer<rightPointer){
            int width=rightPointer-leftPointer;
            int ht=min(height[leftPointer],height[rightPointer]);
            int containerwater=ht*width;
            maxwater=max(maxwater,containerwater);
         
            height[leftPointer]<height[rightPointer] ? leftPointer++ : rightPointer--;
          }
              return maxwater;
        }
       
    
};