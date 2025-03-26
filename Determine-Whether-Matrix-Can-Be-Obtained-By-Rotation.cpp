class Solution {
public:

    void rotate90(vector<vector<int>>& mat,int n){

        for (int i=0;i<n;i++){
            for(int j=0;j<=i;j++){
                swap(mat[i][j],mat[j][i]);
            }
        }
        for(auto &row : mat){
            reverse(begin(row),end(row));
        }
    }
    bool checkequal(vector<vector<int>>& mat,vector<vector<int>>& target,int n){
        for(int i=0;i<n;i++){
            if(mat[i]!=target[i]) return false;
        }
        return true;
    }
    
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        int n =mat.size();
        for(int i = 0;i<4;i++){
            rotate90(mat,n);
            if(checkequal(mat,target,n)) return true;
        }
        return false;

    }
};