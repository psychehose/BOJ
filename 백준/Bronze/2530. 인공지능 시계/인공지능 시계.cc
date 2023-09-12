#include <iostream>

int main() {

    int h;
    int m;
    int s;

    int t;

    std::cin >> h;
    std::cin >> m;
    std::cin >> s;
    std::cin >> t;


    int c_m = t / 60;

    t = t % 60;

    int c_h = c_m / 60;

    c_m = c_m % 60;

    if (t + s >= 60) {
        s = s - 60;
        c_m++;
    }

    if (c_m + m >= 60) {
        m = m - 60;
        c_h++;
    }

    s = (s+t);
    m = (m+c_m);
    h = (h+c_h) % 24;

    std:: cout<<h << " " <<m<< " " <<s;
    
    return 0;
}