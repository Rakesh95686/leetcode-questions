#include<iostream>
using namespace std;
int productsub(int arr[] , int n){
    int res = arr[0];
    for(int i=0 ; i<n ; i++){
        int p = arr[i];
       for( int j= i+1 ; j<n ; j++){
           res = max(res , p);
           p *=arr[j];
       }
       res = max(res , p);
    }
    return res;
}
int main(){
    int arr[] = {1,2,3,4,5,0};
    int size = sizeof(arr) / sizeof(arr[0]);
   cout<<productsub(arr , size);
    return 0;
}