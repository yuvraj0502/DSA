class Solution {
public:
    int threeSumMulti(vector<int>& arr, int target) {
        sort(arr.begin(),arr.end());
        long long mod=1e9+7;
        long long sum;
        int count=0;

        for(int i=0;i<arr.size()-2;i++){
            int j=i+1;
            int k=arr.size()-1;

            while(j<k){
                sum=arr[i]+arr[j]+arr[k];

                if(sum==target){
                    int cnt1=1;
                    int cnt2=1;

                    while(j<k && arr[j]==arr[j+1]){
                        cnt1++;
                        j++;
                    }
                    while(j<k && arr[k]==arr[k-1]){
                        cnt2++;
                        k--;
                    }

                    if(j==k){
                        count=(count%mod+(cnt1%mod*(cnt1-1)%mod)/2)%mod;
                    }

                    if(j!=k){
                        count=(count%mod+(cnt1%mod*cnt2%mod)%mod)%mod;
                    }

                    j++;
                    k--;
                }else if(sum<target){
                    j++;
                }
                else{
                    k--;
                }
            }
        }
        return count;
    }
};