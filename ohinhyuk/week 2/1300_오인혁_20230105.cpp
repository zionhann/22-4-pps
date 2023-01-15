#include <iostream>

using namespace std;
 long long N,k, mid;
long long calculate(long long mid){
    long long cnt = 0;
    for(int i = 1 ; i <=N; ++i){
        cnt += min(N, mid/i);
        if(mid/i == 0) break;
    }

    return cnt;

}

int main(int argc, char** argv){
   

    cin >> N >> k;

    long long left = 1;
    long long right = N*N;
    long long ans = 0;
    
    while(left <= right){
        long long mid = (left+right)/2;

        long long cnt = calculate(mid);

        if(cnt < k) left = mid + 1;
        else if(cnt >= k){
            ans = mid;
            right = mid -1;
            
        } 
        
    }
    cout << ans;

}