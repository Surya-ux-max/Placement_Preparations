#include<iostream>
using namespace std;

int main(){
    
    
    int n=5;
    int largest;
    
    int arr[n];
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    int m = arr[0];
    
    for(int i=0;i<n;i++){
        if(arr[i]<m){
            m = arr[i];
        }
    }
    cout<<m<<endl;
    
    return 0;
}
