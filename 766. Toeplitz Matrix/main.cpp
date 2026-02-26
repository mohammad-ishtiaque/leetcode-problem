#include <iostream>
#include <vector>
using namespace std;

bool isToeplitzMatrix(vector<vector<int>>& matrix) {
        for(int i = 1; i<matrix.size(); i++){
            for(int j = 1; j<matrix[0].size(); j++){
                if(matrix[i-1][j-1] != matrix[i][j]){
                    return false;
                }
            }
        }
        return true;
    }

int main()
{

#ifndef ONLINE_JUDGE
    freopen("inp.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
#endif

    vector<vector<int>> ig = {{1,2,3,4},{5,1,2,3},{9,5,1,2}};
    // bool ans = ;

   cout << isToeplitzMatrix(ig) << endl;
    
    return 0;
}