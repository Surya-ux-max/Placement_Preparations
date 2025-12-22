#include <iostream>
#include <climits>

using namespace std;

int main(){
    
    int n;
    cin>>n;
    
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    int largest = arr[0];
    int second_largest = INT_MIN;
    
    for(int i=1;i<n;i++){
        if(arr[i]>largest){
            second_largest = largest;
            largest = arr[i];
        }
        
        else if(arr[i] > second_largest){
            second_largest = arr[i];
        }
    }
    cout<<largest<<endl;
    cout<<second_largest<<endl;
    
    return 0;
}
