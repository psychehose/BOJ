#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int solution(vector<int> A, vector<int> B) {
    int answer = 0;
    
    sort(B.begin(), B.end(), [](int a, int b) { return a > b; });
    sort(A.begin(), A.end());
    
    for (int i = 0; i < A.size(); ++i) {
        answer += A[i] * B[i];
    }
    

    return answer;
}