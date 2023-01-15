#include <iostream>

using namespace std;

int main(int argc, char** argv){
    int M;
    cin >> M ;
    double rotate = 1;
    
    int clock_cnt = 0;

    long long int A,B;
    int C;

    for(int i = 0 ; i < M ; ++i){
        cin >> A >> B >> C;

        rotate *= B;
        rotate /= A;

        if(C==1) clock_cnt++;
    }
    if(clock_cnt % 2 == 0) cout << 0 << ' ';
    else cout << 1 << ' ';

    cout << (int)rotate <<"\n";
}