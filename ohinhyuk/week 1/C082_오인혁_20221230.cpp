#include <iostream>

using namespace std;
   
int N, M;
char board[50][50];
char answer[50][50];
int black[50][50];
int white[50][50];

int num(int i , int j){
    
    int w =0, b=0;

    for(int x = i ; x < i+8 ; ++x){
        for(int y = j ; y < j+8 ; ++y){
            if(board[x][y] == black[x][y]) b++;
            else if(board[x][y] == white[x][y]) w++;
        }
    }

    return max(w,b);
}

int main(int argc, char** argv){
 
    cin >> N >> M;

    for(int i = 0 ; i < N ; ++i){
        for(int j = 0 ; j < M ; ++j){
            cin >> board[i][j];
            if((i+j) % 2 == 0 ) white[i][j] = 'W';
            if((i+j) % 2 == 0 ) black[i][j] = 'B';
            if((i+j) % 2 == 1 ) white[i][j] = 'B';
            if((i+j) % 2 == 1 ) black[i][j] = 'W'; 
        }
    }
int ans = 0;
    for(int i = 0 ; i <= N-8 ; ++i){
        for(int j = 0 ; j <= M-8 ; ++j){
            ans = max(num(i,j), ans);
        }
    }
    cout << 64 - ans << "\n";

}