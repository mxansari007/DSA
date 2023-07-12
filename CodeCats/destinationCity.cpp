#include<bits/stdc++.h>
using namespace std;


//O(N) O(N)

int main(){
    vector<vector <string>> paths{{"London","New York"},{"New York","Lima"},{"Lima","Sao Paulo"}};

    unordered_map<string,string> map;

    for(int i =0; i<paths.size(); i++){
        map[paths[i][0]] = paths[i][1];
    }

    string destination;
    int count = 0;
    string City = paths[0][0];
    while(map[map[City]] != ""){
        destination = map[map[City]];
        City = map[City];
        count++;
    }   

    if(count == 0){
        cout<<paths[0][1];
    }else{
        cout<<destination;
    }


}

















//approach 1 O(N^2) O(N)
// int main(){

//     vector<vector <char>> city{{'B','C'},{'D','B'},{'C','A'}};

//     vector<vector <char>> front,back;
//     front.push_back(city[0]);
//     int count =0;

//     for(int i =1; i<city.size(); i++){
//         if(front[count][1] == city[i][0]){
//             front.push_back(city[i]);
//             count++;
//         }
//     }

//     count = 0;
//     back.push_back(city[0]);
//     for(int i =1; i<city.size(); i++){
//         if(back[count][0] == city[i][1]){
//             back.push_back(city[i]);
//             count++;
//         }
//     }

//     if(front.size()!=0){
//         cout<<front[front.size()-1][1];
//     }else{
//         cout<<city[0][1];
//     }

// }