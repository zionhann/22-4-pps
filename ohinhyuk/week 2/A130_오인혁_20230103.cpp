#include <iostream>
#include <stack>

using namespace std;

int main(int argc, char** argv){
    stack<int> s;
    int k ,temp;
    int sum = 0;

    cin >> k;

    while(k--){
        cin >> temp;
        sum += temp;
        if(!temp){ 
            sum -= s.top(); 
            s.pop();}
        else s.push(temp);
    }
    

    // for(int i = 0 ; i < s.size(); ++i){    
    //     sum += s.top(); 
    //     s.pop(); 
    // }

    cout << sum << endl;
}