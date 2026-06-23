class Solution {
public:
    int maxArea(vector<int>& heights) {
    //     int max=heights[0],min=heights[0],max2=heights[0];
    //     for(int i=0;i<heights.size();i++){
    //         if(max<heights[i])
    //             max=heights[i];
    //         if(min>heights[i])
    //             min=heights[i];
    //     }
    //     for(int i=0;i<heights.size();i++){
    //         if(max2<heights[i]&&heights[i]<max)
    //             max2=heights[i];
    //     }
    //     if(max==min)
    //         return min*max2;
    //     else
    //         return (max-min)*max2;
    // 
        int l=0,r=heights.size()-1;
        int max=0;
        vector<int>v;
        while(l!=r){
            v.push_back((r-l)*min(heights[r],heights[l]));
            cout<<(r-l)*min(heights[r],heights[l])<<endl;
            if(heights[l]<heights[r])
                l++;
            else
            r--;
        }
         for(int i=0;i<v.size();i++){
            if(max<v[i])
                max=v[i];
         }
         return max;
    }
};
