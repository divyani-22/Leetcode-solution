class Solution {
public:
    int maximalRectangle(vector<vector<char>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        vector<vector<int>> psum(n,vector<int>(m,0));
        int area=0;
        for(int j=0;j<m;j++)
        {
            int sum=0;
            for(int i=0;i<n;i++)
            {
                if(matrix[i][j]=='1'){
                    sum++;
                }
                else{
                    sum=0;
                }
                psum[i][j]=sum;
            }
        }
        for(int i=0;i<n;i++){
            area=max(area,lhist(psum[i]));
        }
        return area;
        
    }
    int lhist(vector<int>&heights)
    {
        stack<int>st;
        int area=0;
        for(int i=0;i<heights.size();i++){
            while(!st.empty() && heights[st.top()]>heights[i]){
                int element=st.top();
                st.pop();
                int nse=i;
                int pse=st.empty()?-1:st.top();
                area=max(area,heights[element]*(nse-pse-1));
            }
            st.push(i);
        }
        while(!st.empty()){
            int element=st.top();
            st.pop();
            int nse=heights.size();
            int pse=st.empty()?-1:st.top();
            area=max(area,heights[element]*(nse-pse-1));
        }
        return area;
    }
};