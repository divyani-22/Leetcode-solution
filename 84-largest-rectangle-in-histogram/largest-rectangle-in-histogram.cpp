class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        vector<int>arr=heights;
        stack<int>st;
        int area=0;
            for(int i=0;i<arr.size();i++){
                while(!st.empty() && arr[st.top()]>arr[i]){
                int element=st.top();
                st.pop();
                int nse=i;
                int pse=st.empty() ? -1:st.top();
                area=max(arr[element]*(nse-pse-1),area);
            }
            st.push(i);
        }
        while(!st.empty())
        {
            int nse=arr.size();
            int element=st.top();
            st.pop();
            int pse=st.empty()?-1:st.top();
            area=max(area,arr[element]*(nse-pse-1));
        }
        return area;
        
    }
};