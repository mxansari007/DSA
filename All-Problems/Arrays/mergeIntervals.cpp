#include<bits/stdc++.h>
using namespace std;

void swap(int &a, int &b){
    int temp =a;
    a =b;
    b =temp;
}


void sortIntervals(vector<vector<int>> &Intervals){

    for(int i =0; i<Intervals.size(); i++){
        for(int j =0; j<Intervals.size()-1-i; j++){
        if(Intervals[j][0] != Intervals[j+1][0]){
            if(Intervals[j][0] > Intervals[j+1][0]){
                swap(Intervals[j][0], Intervals[j+1][0]);
                swap(Intervals[j][1],Intervals[j+1][1]);
            }
            }else{
                if(Intervals[j][1] > Intervals[j+1][1]){
                    swap(Intervals[j][0], Intervals[j+1][0]);
                    swap(Intervals[j][1],Intervals[j+1][1]);
                }
        }
    }
    }
}

void PrintIntervals(vector<vector<int>> &Intervals){

cout<<"{";
    for(int i =0; i<Intervals.size(); i++){
        cout<<"{";
        for(int j =0; j<Intervals[0].size(); j++){
            cout<<Intervals[i][j]<<",";
        }
        cout<<"},";
    }

    cout<<"}";
}

int main(){
    vector<vector<int>> Intervals{{1,4},{4,5},{0,1}};

    sortIntervals(Intervals);

    PrintIntervals(Intervals);

    vector<vector<int>> result;

    for(int i =0; i < Intervals.size(); i++){
        vector<int> temp;
        int secondPoint = Intervals[i][1];
        temp.push_back(Intervals[i][0]);
        
        for(int j =i; j<Intervals.size()-1; j++){
            
            if(Intervals[i][1] >= Intervals[i+1][0]){
                secondPoint = Intervals[i+1][1];
                i++;
            }else{
                break;
            }
        }
        temp.push_back(secondPoint);
        result.push_back(temp);

    }

    //PrintIntervals(result);
}