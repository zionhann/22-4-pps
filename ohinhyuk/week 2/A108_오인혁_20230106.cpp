#include <iostream>
#include <string>

using namespace std;

int main(int argc, char** argv){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int T;
    cin >> T;

    

    for(int i = 0 ; i <T ; ++i){
        
        string before ;
        string after ;

        cin >> before;

        for(int i = before.size()-1 ; i >=0; --i) after += before[i];

        int add = atoi(before.c_str()) + atoi(after.c_str());
        
        string ans = to_string(add);
        bool Same = true;
        for(int i = 0 ; i < ans.size()/2 ; ++i){
        if(ans[i] != ans[ans.size()-1 -i]){
            Same = false;
            break;
        }
        }
        if(Same) cout << "YES\n";
        else cout << "NO\n";
        
    }
}