#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minMovesToCaptureTheQueen(int a, int b, int c, int d, int e, int f) {
        
        int rookSteps = 0;
        int bisSteps = 0;
        
        rookSteps = (a - e  == 0 && b - f == 0) ? 0 : ( a - e == 0 || b - f == 0) ? 1 : 2 ;
        bisSteps = (c - e == 0 && d - f == 0) ? 0  : (c - e == d - f) ?  1 : 2;
        
        return min(rookSteps, bisSteps);
        
    }
};

int main(){
     Solution solution;

    // Example inputs
    int a = 1, b = 1, c = 1, d = 4, e = 1, f = 8;

    // Call the minMovesToCaptureTheQueen method
    int result = solution.minMovesToCaptureTheQueen(a, b, c, d, e, f);
    cout << result << endl;


}