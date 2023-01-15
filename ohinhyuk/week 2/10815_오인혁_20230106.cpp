#include <iostream>
#include <algorithm>

using namespace std;



int main(int argc, char** argv){
    int N,M;
    bool is;

    cin >> N;

    int sang[N+1];
    for(int i = 1 ; i < N+1 ; ++i){
        cin >> sang[i];
    }
    cin >> M;

    int cardSet[M];
    for(int j = 0 ; j < M ; ++j){
        cin >> cardSet[j];
    }

    sort(sang+1,sang+N+1);

    for(int i = 0 ; i < M; ++i){
        is = false;
        int left = 1;
        int right = N;

        while(left <= right){
            int mid = (left+right)/2;

            if(sang[mid] < cardSet[i]){
                left = mid +1;
            }
            else if(sang[mid] > cardSet[i]){
                right = mid - 1;
            }
            else{
                is = true;
                break;
            }
        }
        if(is) cout << 1 << ' '; 
        else cout << 0 << ' ';
    }
    
}