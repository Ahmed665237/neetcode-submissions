class Solution {
public:
    int maxArea(vector<int>& heights) { 
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
