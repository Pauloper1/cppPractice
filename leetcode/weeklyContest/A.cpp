#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int areaOfMaxDiagonal(std::vector<std::vector<int>>& dimensions) {
        float diagonal = numeric_limits<float>::min();
        cout << diagonal << endl;
        int area = 0;
        for (size_t i = 0; i < dimensions.size(); i++) {
            int temp = dimensions[i][0] * dimensions[i][1];
            float Temp_diagonal = sqrt(dimensions[i][0] * dimensions[i][0] + dimensions[i][1] * dimensions[i][1]);
            // cout << dimensions[i][0] << " " << dimensions[i][1] << endl; 
            // cout << Temp_diagonal << endl;
            if (diagonal < Temp_diagonal) {

                diagonal = Temp_diagonal;
              	

                area = dimensions[i][0] * dimensions[i][1];
            }
        }
        return area;
    }
};

int main(){
	Solution solution;

	vector<vector<int>> dimensions = {
        {1, 10},
        {3, 10},
        {4, 4},
        {2, 6},  // Corrected inner vector without extra curly braces
        {6, 3},
        {6, 4},
        {9, 1},
        {6, 1},
        {2, 3}
        // Add more dimensions as needed
    };
	int result = solution.areaOfMaxDiagonal(dimensions);
		cout << result;
	return  0;
}