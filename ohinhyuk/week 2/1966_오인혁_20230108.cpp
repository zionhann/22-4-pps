#include <iostream>
#include <queue>
#include <deque>
#include <algorithm>

using namespace std;

int M;

deque<int> importance;

int simlutation(queue<int> q , int M){
    int cnt = 0;
    while(!q.empty()){
        if(q.front()==importance.front()){
            cnt++;

            if(M == 0) return cnt;

            q.pop();
            importance.pop_front();
            M--;
        }
        else{
            if(M == 0) M = q.size()-1;
            else M--;
            q.push(q.front());
            q.pop();
        }
    }

    return -1;
}

int main(int argc, char** argv){
    int N , T , temp;
    cin >> T;

    while(T--){
        importance.clear();
        queue<int> q;    

        cin >> N >> M;
    
        for(int j = 0 ; j < N; ++j){
            cin >> temp;
            q.push(temp);
            importance.push_back(temp);
        }

        sort(importance.begin(),importance.end() , greater<int>());

        cout << simlutation(q,M) << "\n";

    }
}