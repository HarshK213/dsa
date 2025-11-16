#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> helper(vector<int> cards, int n){
    int score1 = 0, score2 = 0, st = 0, e = n-1;
    int turn = 0;           // 0 is Sereja , 1 is Dima;
    while(st>=e){
        if(cards[st] > cards[e]){
            if(turn == 0){
                score1 += cards[st];
                turn =1;
            }else{
                 score2 += cards[st];
                 turn = 0;
            }
            st++;
        }else{
                        if(turn == 0){
                score1 += cards[e];
                turn =1;
            }else{
                 score2 += cards[e];
                 turn = 0;
            }
            e--;
        }
    }
    return {score1, score2};
}

int main(){
    int n ;
    cin >> n;
    vector<int> cards(n);
    for(int i = 0;i<n;i++){
        cin >> cards[i];
    }
    vector<int> ans = helper(cards, n);
    cout << ans[0] << ' ' << ans[1] << endl;
    return 0;
}