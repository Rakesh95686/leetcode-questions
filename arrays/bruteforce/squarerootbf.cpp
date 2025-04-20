#include<iostream>
using namespace std;

int squareroot(int n ){
    int ans = 0;
    for(long long i = 1 ; i<=n ; i++){
        long long  val = i*i;
        if(val <= n*1ll){
             ans = i;
        }else{
            break;
        }
    }
    return ans;
}
int main(){
    int n;
    cout<<"enter the number : ";
    cin>>n;

    int ans = squareroot(n);
    cout<<"the ans is :"<<ans;
   return 0;
}