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
--------------------------------------------------------------------------
Another solution -
    #include<iostream>
using namespace std;
int main(){
    int n;
    int k;
    cin>>n>>k;
    
    int arr[n];
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int currentSum=0;
    int maxSum=0;
    
    for(int i=0;i<=n-k;i++){   //if input k=3,n=6, then  n-k = 6-3 = 3 , first three position
        int currentSum=0;
        for(int j=i;j<i+k;j++){    // j=i means 0, i+k means 0+6 = 6 .
            currentSum+=arr[j];    // 1 = currentSum , then 2 will come inside , then 3 will come inside
            }
            maxSum = max(currentSum,maxSum); // here the comparison happens using the max function.
        }
    cout<<"maximum sum "<<maxSum;
}
