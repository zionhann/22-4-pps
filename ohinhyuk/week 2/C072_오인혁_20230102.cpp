#include <iostream>
#include <vector>

using namespace std;

int diff(char c){
    if(c =='N') return 13;
    else if(c < 'N') return (c - 'A');
    else return ('Z' - c + 1);
}


int main(int argc, char** argv){
    int N , left , right , sum , now;
    int move_to_right, move_to_left;
    string s;
    vector<int> index;
    cin >> N;


    for(int i = 0 ; i < N ; ++i){
        cin >> s;

        for(int i = 0 ; i < s.size() ; ++i){
            if(s[i] != 'A') index.push_back(i);
        }

        left = 1; right = index.size()-1; sum = diff(s[index[0]]); now = 0;
        
        while(left <= right){
                if(now < left) {
                   move_to_left = now + (s.size() - index[right]);
                   move_to_right = index[left] - now;
                    
                    if(move_to_left >= move_to_right){
                        sum+= move_to_right;
                        now = index[left++];
                        sum += diff(s[now]);
                        cout << now << sum << endl;
                    } 
                    else{
                        sum += move_to_left;
                        now = index[right--];
                        sum += diff(s[now]);

                    } 

                }
                else{
                    move_to_left = now - index[right];
                    move_to_right = s.size() - now + index[left];

                    if(move_to_left <= move_to_right){
                        sum+= move_to_left;
                        now = index[right--];
                        sum += diff(s[now]);
                        
                    }
                    else{
                        sum += move_to_right;
                        now = index[left++];
                        sum += diff(s[now]);
                        
                    }
                }
            
            
        }
        cout << sum << "\n";
        s.clear();
        index.clear();
    }

}