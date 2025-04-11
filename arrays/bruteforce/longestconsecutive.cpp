#include<bits/stdc++.h>
using namespace std;
int consecutive(vector<int>arr){
    int n = arr.size();
    sort(arr.begin() , arr.end());
    int count = 1;
    for(int i=0 ; i<n ; i++){
       if(arr[i] - arr[i+1] == -1){
        count++;
       }
    }
    return count;
}
int main(){
    vector<int>arr = {100, 200, 1, 3, 2, 4};
    cout<<consecutive(arr);
    return 0;
}