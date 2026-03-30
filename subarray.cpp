#include<iostream>

using namespace std ;
int main(){
    int arr[] = {1,2,3,4} ;
   int x =  sizeof(arr)/sizeof(arr[0]) ; 
   for ( int i = 0 ; i< x ; i++){
    for (int j = i ; j<x ; j++ ){
        for(int k = i ; k<=j ; k++){
            cout<<arr[k] ;
        }
        cout<<"\n" ;
    }
   }
}