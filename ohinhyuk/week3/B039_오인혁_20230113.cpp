#include <iostream>
#include <algorithm>
#include <iterator>

using namespace std;

int main(int argc ,char** argv){
    int n;
    int chu[n];
    int chu_copy[n];
    int temp;
    cin >> n;
    
    for(int i = 0 ; i < n ; ++i){
        cin >> chu[i];  
    } 

    copy(chu,chu+n,chu_copy);



    int total = 10000000;
    temp = 0;
    //selectSort
int min;
int min_idx;
    for(int i = 0 ; i < n ; ++i){
        min = chu_copy[i];
        min_idx = i;
        for(int j = i+1; j < n ; ++j){
            if(min > chu_copy[j]){
                min = chu_copy[j];
                min_idx = j;
            }
       }

        if(i == min_idx) continue;
        
        temp += (chu_copy[i] + chu_copy[min_idx]);
        swap(chu_copy[i] ,chu_copy[min_idx]);
    }

    if(total > temp) total = temp;

    temp = 0;
    copy(chu,chu+n,chu_copy);

int de_s = n-1;
    for(int i = 0 ; i < n-1 ; ++i){
        for(int j = 0 ; j <  de_s; ++j){
            if(chu_copy[j] >chu_copy[j+1]){
                swap(chu_copy[j] , chu_copy[j+1]);
                temp += (chu_copy[j] + chu_copy[j+1]);
            }
        }
        de_s--;
    }

    if(total > temp) total = temp;

    cout << total;

}