#include <iostream>

using namespace std;

int main(int argc, char** argv){
    string s;
    int total = 0;
    cin >> s;
    int cnt = 1;

    for(int i = 0 ; i < s.size() ; ++i){
        if(s[i] == '-') s[i] ='0';

        if(s[i] == 'S'){
            total += 10;
            if(cnt > 21 ) continue;
            if(cnt==21){
                if(s[i-2]=='S') total+=10;
                cnt+=2;
                continue;
            } 
            
            if(i >= 2 && s[i-2] == 'S') total += 10;
            if(i >= 1 && (s[i-1] == 'S' || s[i-1]=='P')) total += 10;
            
            cnt+=2;
        }
        else if(s[i] == 'P'){
            total += (10 - (s[i-1]-'0'));
             if(cnt > 21 ) continue;
            if(cnt==21){
                if(s[i-2]=='S') total+=10 - (s[i-1]-'0');
                cnt+=1;
                continue;
            } 
            
            if(i >= 2 && s[i-2] == 'S') total += 10 - (s[i-1]-'0');
            if(i >= 1 && (s[i-1] == 'S' || s[i-1] == 'P')) total += 10 - (s[i-1]-'0');
            cnt+=1;
        }
        // else if(s[i] == '-'){
        //     cnt+=1;
        //     continue;
        // }
        else{
            total += s[i] -'0';
             if(cnt > 21 ) continue;
            if(cnt==21){
                if(s[i-2]=='S') total+=s[i] -'0';
                cnt+=1;
                continue;
            } 
            if(i >= 2 && s[i-2] == 'S') total += s[i] -'0';
            if(i >= 1 && (s[i-1] == 'S' || s[i-1] == 'P')) total += s[i] -'0';
            cnt+=1;
        }
    }

    cout << total ;
}