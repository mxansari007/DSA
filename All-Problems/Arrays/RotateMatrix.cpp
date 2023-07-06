class Solution {
public:


    void swap(int &a, int &b){
        int temp = a;
        a = b;
        b = temp;
    }

        void transpose(vector<vector<int>>& matrix){
        for(int i =0; i<matrix.size(); i++){
            for(int j =i; j<matrix[i].size(); j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }
    }

     void reverse(vector<vector<int>>& matrix){
              for(int i =0; i<matrix.size(); i++){
            for(int j =0; j<matrix[i].size()/2; j++){
                swap(matrix[i][j],matrix[i][matrix[i].size()-j-1]);
            }
        }
    }

    void rotate(vector<vector<int>>& matrix) {

            transpose(matrix);
            reverse(matrix);
    }
};
