#include <iostream>

using namespace std;

char transition(char a){
    if(a =='Z') return 'A';
    else return a+1;
}

int main(int argc ,char** argv){
    int N;
    string s;

    cin >> N ;

    for(int i = 0 ; i < N ; ++i){
        cin >> s;

        cout << "String #" << i+1 << "\n";
        for(int j = 0 ; j < s.size(); ++j) cout << transition(s[j]);
        cout << "\n";
        cout << "\n";
    }


}