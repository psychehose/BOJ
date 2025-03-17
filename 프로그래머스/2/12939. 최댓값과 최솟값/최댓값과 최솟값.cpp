#include <algorithm>
#include <string>
#include <limits>

using namespace std;

string solution(string s) {
    string answer = "";
    
    int my_min = std::numeric_limits<int>::max();
    int my_max = std::numeric_limits<int>::min();
    
    string temp = "";

    for (char c : s) {
        if (c == ' ') {
            int n = stoi(temp);
            my_min = min(my_min, n);
            my_max = max(my_max, n);
            temp = "";
            continue;
        }
        temp += c;
    }

    int n = stoi(temp);
    my_min = min(my_min, n);
    my_max = max(my_max, n);

    answer = to_string(my_min) + " " + to_string(my_max);

    return answer;
}