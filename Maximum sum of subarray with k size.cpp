#include<vector>
#include<algorithm>
#include<iostream>
using namespace std;
int main(){
    
    int n;
    int k;
    cin>>n;
    cin>>k;
    int arr[n];
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int currentSum=0;
    int maxSum=0;
    for(int i=0;i<n-k;i++){
        for(int j=i;j<i+k;j++){
            currentSum+=arr[i];
            if(currentSum > maxSum){
                maxSum = currentSum;
            }
        }
    }
    cout<<"maximum Sum of subarray: "<<maxSum<<endl;
    return 0;
    
}
