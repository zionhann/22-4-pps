#include <iostream>
#include <algorithm>

using namespace std;

int main(int argc, char** argv){
    int N;

    cin >> N;

    int tree[N];

    for(int i = 0 ; i < N ; ++i) cin >> tree[i];
       
    sort(tree, tree+N , greater<int>());

    for(int i = 0 ; i < N ; ++i){
        tree[i] -= (N - i - 1);
    }
    
    cout << *max_element(tree, tree + N) + N + 1;


    
}