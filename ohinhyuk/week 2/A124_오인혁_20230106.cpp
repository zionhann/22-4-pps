#include <iostream>

using namespace std;

int main (int argc, char** argv){
    int N , odd;

    cin >> N;

    while(N > 1){
        odd = 5;
        if(N%2==0){
            N /= 2;
            cout << 2 << "\n";
        }
        else if(N%3 ==0){
            N /= 3;
            cout << 3 << "\n";
        }
        else{
            while(N%odd != 0){
                odd += 2;
            }
            N /= odd;
            cout << odd <<"\n";
        }
    }
}