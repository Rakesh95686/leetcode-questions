#include<bits/stdc++.h>
using namespace std;
int consecutive(vector<int>nums){
   int n = nums.size();
   if(n==0)return 0;
   int longest = 1;
    unordered_set<int> st;
    for(int i=0 ; i<n ; i++){
        st.insert(nums[i]);
    }

    for(auto it : st){
        if(st.find(it-1) == st.end()){
            int count = 1;
            int x = it;
            while(st.find(x+1) != st.end()){
                x = x+1;
                count = count+1;
            }
            longest = max(longest , count);
        }
    }
    return longest;
}

int main(){
    vector<int>arr = {100, 200, 1, 3, 2, 4};
    cout<<consecutive(arr);
    return 0;
}
