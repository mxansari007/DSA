#include<bits/stdc++.h>
using namespace std;

void trimEnds(string &s){

    int i =0; 

    while(s[i]==' '){
        i++;
    }
    s = s.substr(i,s.length());
    i = s.length()-1;
    while(s[i]==' '){
        i--;
    }
    s = s.substr(0,i+1);
}

void reverse(string &s){
    for(int i =0; i<s.length()/2; i++){
        char temp = s[i];
        s[i] = s[s.length()-i-1];
        s[s.length()-i-1] = temp;
    }
}


int main(){
    string s = "   the boy is runing   ";

    trimEnds(s);

    int length = s.length();
    s = " "+s;
    string makeword;
    string sentence;
    
    for(int i = s.length()-1; i>=0; i--){
       if(s[i] == ' ' && makeword.length() != 0){
            reverse(makeword);
            sentence += makeword + " ";
            makeword ="";
       }else if(s[i] != ' '){
            makeword+=s[i];
       }
    }

    trimEnds(sentence);

    cout<<sentence;

}
