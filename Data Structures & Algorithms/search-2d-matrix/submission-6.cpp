class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int lo=0,hi=matrix.size()-1,mid,x=-1;
        while(lo<=hi){
            mid=(lo+hi)/2;
            if(matrix[mid][matrix[0].size()-1]==target)
                return true;
            if(matrix[mid][matrix[0].size()-1]>target){
                if(matrix[mid][0]<target){
                    x=mid;
                    break;
                }
                else if(matrix[mid][0]==target)
                    return true;
                else
                    hi=mid-1;
            }
            else if(matrix[mid][matrix[0].size()-1]<target)
                lo=mid+1;
            
        }
        if(x==-1)
            return false;
        int r=0,col=matrix[0].size()-1,mid2;
        while(r<=col){
            mid2=(r+col)/2;
            if(matrix[x][mid2]==target)
                return true;
            else if(matrix[x][mid2]<target)
                r=mid2+1;
            else
                col=mid2-1;
        }
        return false;
    }
};
