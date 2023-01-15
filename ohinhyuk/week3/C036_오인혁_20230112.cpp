#include <iostream>
#include <vector>

using namespace std;

int nanjangi[9];

void DFS(int n ,int total , vector<int> v){

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);


    if(n == 9){
        if(total == 100 && v.size() == 7) 
        {
            for(auto x : v) cout << x << "\n";
            exit(0);
        }
        return;
    }

    DFS(n+1 , total,v);
    total += nanjangi[n];
    v.push_back(nanjangi[n]);
    DFS(n+1 , total,v);
}

int main(int argc, char** argv){
    
    vector<int> v;
    for(int i = 0 ; i < 9 ; ++i){
        cin >> nanjangi[i];
    }
    DFS(0,0 , v);
}