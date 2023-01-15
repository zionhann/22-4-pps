#include <iostream>

using namespace std;

int A[500][500];


int main(int argc , char** argv){
    int T , N , M ;
    bool isArranged;

    cin >> T;


    while(T--){
        isArranged = true;
        cin >> N >> M;


        for(int i = 0 ; i < N ; ++i){
            for(int j = 0 ; j < M ; ++j){
                cin >> A[i][j]; 
            }
        }

        for(int i = N-2 ; i >= 0 ; --i){
            for(int j = M-2 ; j >= 0 ; --j){
                if(A[i][j] + A[i+1][j+1] > A[i][j+1] + A[i+1][j]) isArranged = false;

                // if(i < N-1 && j < M-1 && A[i][j] + A[i+2][j+2] > A[i][j+2] + A[i+2][j]) isArranged = false;
            }
        }

        if(isArranged) cout << "YES" << "\n";
        else cout << "NO" <<"\n";
    }
}