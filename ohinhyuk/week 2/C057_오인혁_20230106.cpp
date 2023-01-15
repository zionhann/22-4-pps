#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

bool comp(string s1 , string s2){

    int s1_len = s1.size();
    int s2_len = s2.size();

    if(s1_len == s2_len){
        return s1 < s2;
    }

    return s1.size() < s2.size();

}


int main(int argc , char** argv){
    
    int N;
    string temp;
    vector<string> v;

    cin >> N ;

    for(int i = 0 ; i < N ; ++i){
        cin >> temp;
        v.push_back(temp);
    }

    sort(v.begin() , v.end() , comp);
    v.erase(unique(v.begin(),v.end()),v.end());

    for(string s : v) cout << s << "\n";
}