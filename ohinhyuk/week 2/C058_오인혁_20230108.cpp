#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc , char** argv){
    
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int N , K , temp;

    cin >> N >> K;

    vector<int> v;

    for(int i = 0 ; i < N ; ++i){    
        cin >> temp;
        v.push_back(temp);
    }

    sort(v.begin(), v.end());

    cout << v[K-1] << "\n";


}