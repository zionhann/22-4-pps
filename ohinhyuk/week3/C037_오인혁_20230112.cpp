#include <iostream>
#include <algorithm>

using namespace std;

bool largeNsame_s(string a, string b){
    if(a.size() > b.size()) return true;
    else if(a.size() < b.size()) return false;

    for(int i = 0 ; i < a.size() ; ++i){
        if(a[i] - '0' > b[i] -'0') return true;
        else if(a[i] - '0' < b[i] - '0') return false;
    }
    
    return true;
}

string sum_s(string a , string b){
    string sum = "";
    bool carry;
    if(a.size() > b.size()){

        int i;
        carry = false;
        
        for(i = 0 ; i < b.size() ; ++i){
            if(carry && ((a[a.size()-i - 1]-'0') + (b[b.size()-i-1] -'0') >= 10) ){
                carry = true;
                sum +=( (a[a.size()-i - 1]-'0') + (b[b.size()-i-1] -'0') - 9) + '0';
            }
            else if(!carry && ((a[a.size()-i - 1]-'0') + (b[b.size()-i-1] -'0') >= 10) ){
                carry = true;
                sum += ( (a[a.size()-i - 1]-'0') + (b[b.size()-i-1] -'0') - 10 ) + '0';
            }
            else if(carry && ((a[a.size()-i - 1]-'0') + (b[b.size()-i - 1] -'0') < 10) ){
                carry = false;
                sum += ( (a[a.size()-i - 1]-'0') + (b[b.size()-i- 1] -'0') + 1) + '0';
            }
            else if(!carry && ((a[a.size()-i -1 ]-'0') + (b[b.size()-i-1] -'0') < 10) ){
                carry = false;
                sum += (a[a.size()-i - 1]-'0') + (b[b.size()-i-1] -'0') + '0';
            }
        }

        for(;i < a.size(); ++i ){
            if(carry && ((a[a.size()-i-1]-'0') == 9) ){
                carry = true;
                sum += '0';
            }
            else if (carry){
                carry = false;
                sum += (a[a.size()-i-1]-'0' + 1) + '0';
            }
            else{
                sum += a[a.size()-i-1];
            }
        }
        if(carry) sum += '1';
    }
    else{
        int i;
        carry = false;
        for(i = 0 ; i < a.size() ; ++i){
            if(carry && ((a[a.size()-i - 1]-'0') + (b[b.size()-i-1] -'0') >= 10) ){
                carry = true;
                sum +=( (a[a.size()-i - 1]-'0') + (b[b.size()-i-1] -'0') - 9) + '0';
            }
            else if(!carry && ((a[a.size()-i - 1]-'0') + (b[b.size()-i-1] -'0') >= 10) ){
                carry = true;
                sum += ( (a[a.size()-i - 1]-'0') + (b[b.size()-i-1] -'0') - 10 ) + '0';
            }
            else if(carry && ((a[a.size()-i - 1]-'0') + (b[b.size()-i - 1] -'0') < 10) ){
                carry = false;
                sum += ( (a[a.size()-i - 1]-'0') + (b[b.size()-i- 1] -'0') + 1) + '0';
            }
            else if(!carry && ((a[a.size()-i -1 ]-'0') + (b[b.size()-i-1] -'0') < 10) ){
                carry = false;
                sum += (a[a.size()-i - 1]-'0') + (b[b.size()-i-1] -'0') + '0';
            }
        }

        for(;i < b.size(); ++i ){
            if(carry && ((b[b.size()-i-1]-'0') == 9) ){
                carry = true;
                sum += '0';
            }
            else if (carry){
                carry = false;
                sum += (b[b.size()-i-1]-'0' + 1) + '0';
            }
            else{
                sum += b[b.size()-i-1];
            }
        }
        if(carry) sum += '1';
    }

    reverse(sum.begin(),sum.end());
    
    return sum;
}

int num_fibonacci(string a , string b){
    string f1 = "1";
    string f2 = "2";
    string temp;
    int cnt = 0;

    while(largeNsame_s(b,f1)){
    
        if(largeNsame_s(f1,a)) cnt++;    
    
        temp = f1;
        f1 = f2;
        f2 = sum_s(temp,f2);

    }
    
    return cnt;
}

int main(int argc ,char** argv){
    // long long int a , b;
    string a , b;
    while(1){
        cin >> a >> b;

        // cout << sum_s(a,b) << "\n";
        // if(a == "0" && b =="2"){
        //     cout << 2 << "\n";
        //     continue;
        // }
       
        // if(!largeNsame_s(b,a)){
        //     cout << 0 << "\n";
        //     continue;
        // }

        if(a == "0" && b == "0") break;
        
        cout <<" answer : " << num_fibonacci(a,b) << "\n";    

    }
}