#include<iostream>
#include<vector> 
#include<algorithm>
using namespace std ;
void comb(int arr[] , int target , vector<int> v , int idx , int n ){
    if(target == 0){
        for(int i = 0 ; i<v.size() ;i++){
            cout<<v[i] << " ";
            
        }
        cout<<endl ;
         return ;
    }
    if (target<0 ) return ;
    
    for(int  i = idx ; i< n ; i++){
       
        if(arr[i]>target) break ;
        if(i > idx && arr[i] == arr[i-1]) continue;
         v.push_back(arr[i]) ;
         comb(arr,target-arr[i] , v , i+1, n) ;
         v.pop_back() ;
    }
}
int main(){
int arr[] = {10,1,2,7,6,1,5} ;
// 1,1 ,2,5,6,7,10
int target = 8 ;
int n = sizeof(arr)/sizeof(arr[0]) ;
sort(arr,arr+n) ;
vector<int> v ;
comb(arr,target,v,0,n) ;
}