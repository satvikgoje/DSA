class Solution {
public:
    
    int kad(vector<int> &arr,int k){
        int curr=0;
        int res=arr[0];
        const long long M = 1e9+7;
        int n=arr.size();
        
        for(int i=0;i<k*n;i++){
            curr = curr+arr[i%n];
            res=max(curr,res);
            curr=max(curr,0);
            curr %= M;
            res %= M;
        }
        if(res<0)
            return 0;
        else
            return res;
//     long long M = 1000000007;
//     int n = arr.size();
//     int cSum = INT_MIN; // currentSum
//     int mSum = INT_MIN; //maxSum
    
// 	// loop will run twice, if isTwice is true
// 	// basically we will be doing kadane for the array twice
//     for(int j=0; j<k; j++) {
//         for(int i=0; i<n; i++) {
//             if(cSum>=0) {
//                 cSum += arr[i];
//             } else {
//                 cSum = arr[i];
//             }
//             if(cSum>mSum) {
//                 mSum =  cSum;
//             }
//             cSum %= M;
//             mSum %= M;
//             // cout<<arr[i]<<" ";
//         }   
//     }
//         if(mSum<0)
//             return 0;
//     return mSum;
    }
    int kConcatenationMaxSum(vector<int>& arr, int k) {
        const long long M=1e9 +7;
        int n=arr.size();
        long long int sum{0};
        int ans{0};
        
        if(k==1){
            ans=kad(arr,1);
            return ans;
        }
        
        for(int i=0;i<n;i++){
            sum +=arr[i];
        }
            
        if(sum<0){
            ans=kad(arr,2);
            return ans;
        }
            
        else{
            ans = (kad(arr,2) + ((sum)*(k-2))%M)%M;
            return ans;
        }
        
    }
};