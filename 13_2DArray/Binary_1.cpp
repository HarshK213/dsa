#include <iostream>
#include <vector>
using namespace std;

bool binarySearch(vector<vector<int>>& mat,int key){
    int Rs = 0, Re = mat.size()-1;
    while(Rs<=Re){
        int Rmid = Rs + (Re-Rs)/2;
        int Ce = mat[Rmid].size()-1;

        // (mat[Rmid][0] <= key && mat[Rmid][Ce] >= key)

        if(mat[Rmid][0] > key) Re = Rmid-1;                     // Above Row
        else if(mat[Rmid][Ce] < key) Rs = Rmid+1;               // Below Row
        else{                                                   // Current Row
            int Cs =0;
            while(Cs<=Ce){
                int Cmid = Cs+(Ce-Cs)/2;

                if(mat[Rmid][Cmid] > key) Ce = Cmid-1;
                else if(mat[Rmid][Cmid] <key) Cs = Cmid +1;
                else{
                    return true;
                }
            }
        } 
    }
    return false;
}


int main(){
    vector<vector<int>> mat = {{1,2,3},{4,5,6,7,8,9},{10,11}};
    cout << binarySearch(mat,14) << endl;
    return 0;
}