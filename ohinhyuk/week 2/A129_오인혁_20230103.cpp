#include <iostream>
#include <fstream>
#include <stack>
#include <vector>
#include <string>
using namespace std;

bool isBalanced(string str){

    stack<char> s;
    for(int i = 0 ; i < str.size() ; ++i){
        if(str[i]== '(' || str[i]=='['){
            s.push(str[i]);
        }
        else if(str[i]==')'){
            if(s.empty() || s.top() != '(') return false;
            s.pop();
        }
        else if(str[i]==']'){
            if(s.empty() || s.top() !='[') return false;
            s.pop();
        }
    }
    if(!s.empty()) return false;
    return true;
}

int main(int argc , char** argv){
    
    bool first = true;
    string answer = "";
    string str;
    while(1){
    
        getline(cin,str);
    
        if(str.length() == 1 && str[0]=='.') break;

        if(isBalanced(str)) answer = "yes";
        else answer="no";
        cout << answer << "\n";

    }

    return 0;

}