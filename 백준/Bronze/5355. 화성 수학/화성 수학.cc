#include <iostream>
#include <sstream>
#include <vector>
#include <iomanip>
#include <cmath>

int main() {

    using namespace std;

    int n;

    cin >> n;
    cin.ignore();

    string s;


    for (int i = 0; i < n; i++) {

        getline(cin , s);

        stringstream stream(s);
        string word;


        vector<string> words;
        words.reserve(4);

        double number;

        while (getline(stream, word, ' ')) {
            words.push_back(word);
        }

        for(int i = 0; i < words.size(); i++) {
            if(i == 0) {
                number = atof(words[i].c_str());
            } else {
                if(words[i] == "@") {
                    number *= 3;
                } else if(words[i] == "%") {
                    number += 5;
                } else {
                    number -= 7;
                }
            }
        }

        number *= 100;
        number = floor(number);
        number /= 100;

        cout << fixed;
        cout << setprecision(2);

        cout << number << endl;
    }

    return 0;
}
