#include<bits/stdc++.h>
using namespace std;
vector<vector<int>>zeromatric(vector<vector<int>>mat , int r , int c){
    int firstcol = 0;
    for(int i=0 ; i<r ; i++){
        if(mat[i][0] == 0)firstcol = 0;
        for(int j=1 ; j<c ; j++){
            if(mat[i][j] == 0){
               mat[i][0] = 0;
               mat[0][j] = 0;
            }
        }
    }

    for(int i=r-1 ; i>=0 ; i--){
        for(int j=c-1 ; j>=1 ; j--){
            if(mat[i][0] == 0 || mat[0][j]==0){
                mat[i][j] = 0;
            }
        }
        if(firstcol)mat[i][0] = 0;
    }
    return mat;
}
int main(){
    vector<vector<int>> matrix = {{1, 1, 1}, {1, 0, 1}, {1, 1, 1}}; 
    int n = matrix.size();
    int m = matrix[0].size();
    vector<vector<int>>ans = zeromatric(matrix , n , m);
    cout<<"the final matrics is : \n";
    for(auto it : ans){
        for(auto ele : it){
            cout<<ele<<" ";
        }
        cout<<"\n";
    }
    return 0;
}