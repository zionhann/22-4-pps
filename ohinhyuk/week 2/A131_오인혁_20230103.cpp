#include <iostream>
#include <map>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

int main(int argc , char** argv){
    int N,temp;
    long long int sum = 0;
    int min_num = 4001;
    int max_num = -4001;
    map<int,int> m;
    vector<int> v;
    vector<int> v2;
    cin >> N;

    for(int i = 0 ; i < N ; ++i){
        cin >> temp;
        v.push_back(temp);
        m[temp]++;
        sum += temp;
    }
    sort(v.begin() , v.end());
    
    int many = -1;

    for(auto x : m) many = max(x.second, many);
    
    int mid = v[v.size() / 2];
    
    for(auto x : m){
        if(many == x.second) v2.push_back(x.first);
    } 

    if(v2.size()==1) many = v2[0];
    else many = v2[1];

    
    int range =v.back() - v.front();
    
    cout << (int)round((double)sum / N) << "\n" << mid << "\n" << many << "\n" << range << "\n";
}