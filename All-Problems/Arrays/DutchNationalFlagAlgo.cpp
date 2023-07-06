#include<bits/stdc++.h>
using namespace std;

void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

int main(){

    vector<int> colors{2,2,2,1,1,0,1};
    int size = colors.size();

    int low = 0;
    int mid = 0;
    int high = size;

    while(mid<size){

        if(colors[mid] == 0){
            colors[low] = 0;
            low++;
            mid++;
        }else if(colors[mid] == 1){
            colors[mid] = 1;
            mid++;
        }else{
            swap(colors[mid],colors[size-1]);
            size--;
        }
    }

    cout<<"Array after sorting : ";

    for(int i =0; i<colors.size(); i++){
        cout<<colors[i]<<" ";
    }

}
