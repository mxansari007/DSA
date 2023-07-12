class Solution {
public:
    void swap(char &a, char &b){
        int temp = a;
        a = b;
        b = temp;
    }

    string reversePrefix(string word, char ch) {
        
        int n = 0;
        for(int i = 0; i<word.size(); i++){
            
            if(word[i] == ch){
                break;
            }
            n++;
        }


        if(n != word.size()){
            for(int i =0; i<n/2+1; i++){
                swap(word[i],word[n-i]);
            }
        }

        return word;
    }
};