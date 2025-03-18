#include <algorithm>
#include <string>
#include <vector>

using namespace std;

vector<int> solution(string s) {
    vector<int> answer(2, 0);
    
    while(s != "1") {
        answer[0] = answer[0] + 1; 

        int cnt_zero = 0;
        for (int i = 0; i < s.length(); ++i) {
            if (s[i] == '0') {
                cnt_zero++;
            }
        }
        
        answer[1] = answer[1] + cnt_zero; 
        int cnt_one = s.length() - cnt_zero;
        s = "";
        
        while(true) {
            if (cnt_one / 2 == 0) {
                s += '1';
                break;
            }
            if(cnt_one % 2 == 0) {
                s += '0';
            } else {
                s += '1';
            }
            cnt_one = cnt_one / 2;
        }

        reverse(s.begin(),s.end());
    }
    
    return answer;
}