#include<bits/stdc++.h>
using namespace std;

int main(){
    string s = "{[]()}";
    stack<char> st;
    int count = 0;
    for(int i =0; i<s.size(); i++){
        if(s[i] == '{'){
            st.push(s[i]);
        }else if(s[i] == '['){
            st.push(s[i]);
        }else if(s[i] == '('){
            st.push(s[i]);
        }

        
        if(s[i] == '}'){
            
            if(st.top() != '{'){
                
                cout<<"false";
                break;
            }else{st.pop();}
        }else if(s[i] == ']'){
               if(st.top() != '['){
                
                cout<<"false";
                break;
            }else{st.pop();}
        }else if(s[i] == ')'){
               if(st.top() != '('){
                
                cout<<"false";
                break;
            }else{st.pop();}
        }
        count++;
    }

    if(count == s.length()){
        cout<<"true"<<"\n";
    }

}