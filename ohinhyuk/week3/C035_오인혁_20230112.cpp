// 미완성

#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char** argv){
    
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int N;

    cin >> N;

    int x[N];
    int y[N];

    int x_t;
    int y_t;

    for(int i = 0 ; i < N; ++i){
        cin >> x[i] >>y[i];
    }

    int cnt = 0;

    for(int i = 0 ; i < N ; ++i){
        x_t = 0;
        y_t = 0;
        for(int j = 0 ; j < N ; ++j){
            if(x[i]==x[j] && y[i] != y[j]) x_t++;
            if(y[i]==y[j] && x[i] != x[j]) y_t++;
        }
        cnt += (x_t * y_t);
    }

    cout << cnt;

}