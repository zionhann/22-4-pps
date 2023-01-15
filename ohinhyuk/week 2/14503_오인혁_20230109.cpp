#include <iostream>

using namespace std;


bool map[50][50];
bool check[50][50];
int dy[4] = {-1 , 0 , 1 , 0};
int dx[4] = {0 , -1 , 0 , 1};
int N,M;

int simulation(int x , int y, int dir){
    
    dir+= 1024;

    int x2 , y2;
    bool done = false;
    int clean_cnt = 0;
    int check_cnt = 0;
    
    while(!done){
        
        check_cnt = 0;
        if(!map[x][y]){
            map[x][y]= true;
            clean_cnt++;
        } 

    while(check_cnt != 4){
        
        x2 = x + dx[dir%4];
        y2 = y + dy[dir%4];
        if(x2 >= 0 && x2 < N && y2 >=0 && y2 < M && !map[x2][y2]){
            x = x2;
            y = y2;
            dir--;
            break;
        }
        else{
            dir--;
            check_cnt++;
        }
    }

    if(check_cnt == 4){
        x2 = x + dx[(dir - 1) % 4];
        y2 = y + dy[(dir - 1) % 4];
        if(x2 >= 0 && x2 < N && y2 >=0 && y2 < M && !check[x2][y2]){
            x = x2;
            y = y2;
        }
        else{
            done = true;
        }
    }
    
    }

    return clean_cnt;
}

int main(int argc , char** argv){
    
    cin >> N >> M;

    int x , y , dir , temp;

    cin >> x >> y >> dir;

    for(int i = 0 ; i < N ;++i){
        for(int j = 0 ; j < M ; ++j){
            
            cin >> map[i][j];
            if(map[i][j] == 1) check[i][j] = true;
        }
    }
    cout << simulation(x,y,dir) << "\n";

    
}