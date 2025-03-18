#include <string>
#include <iostream>
#include <stack>

using namespace std;

bool solution(string s) {
    stack<char> stk;
    
    for (int i = 0; i < s.length(); ++i) {
        if (s[i] == ')') {
            if (!stk.empty() && stk.top() == '(') {
                stk.pop();
                continue;
            } else {
                return false;
            }
        }
        stk.push(s[i]);
    }

    return stk.empty();
}