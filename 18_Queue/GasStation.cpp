#include <iostream>
#include <vector>
using namespace std;

int GasStation(vector<int>& gas, vector<int>& cost){
    int n = gas.size(), TotalGas=0, TotalCost=0, currGas = 0, start=0;
    for(int i=0; i<n; i++){
        TotalCost+=cost[i];
        TotalGas+=gas[i];
        currGas += (gas[i]-cost[i]);
        if(currGas < cost[i]){
            start = i+1;
            currGas=0;
        }
    }
    return (TotalCost > TotalGas) ?-1:start;
}