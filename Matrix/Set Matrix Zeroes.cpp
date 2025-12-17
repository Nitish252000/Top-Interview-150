class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int rz = matrix.size();
        int cz = matrix[0].size();
        set<int> rzero, czero;

        for (int i = 0; i < rz; i++) {
            for (int j = 0; j < cz; j++) {
                if (matrix[i][j] == 0) {
                    rzero.insert(i);
                    czero.insert(j);
                }
            }
        }

        for(auto r:rzero){
            for(int j=0;j<cz;j++){
                matrix[r][j]=0;
            }
        }
        for(auto c:czero){
            for(int i=0;i<rz;i++){
                matrix[i][c]=0;
            }
        }
    }
};
