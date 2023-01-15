#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main(int argc, char** argv){
    int A,B,N;
    
    cin >> A >> B >> N;

    int setted[N];
    int diff = abs(B-A);
    int idx = -1;
    for(int i = 0 ; i < N ; ++i){
        cin >> setted[i]; 
        
        if(abs(B - setted[i]) < diff){
            diff = abs(B-setted[i]);
            idx = i;
        }
    }
    if(idx == -1) cout << diff;
    
    else cout << diff+1;
    



    
    

}