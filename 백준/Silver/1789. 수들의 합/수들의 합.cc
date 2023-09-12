#include <iostream>

int main() {

    long long s;

    long long n = 1;

    std::cin >> s;

    if (s <= 2) {
        std::cout << 1;
        return 0;
    }

    while (s - n > n ) {
        s = s-n;
        n++;
    }

    std::cout << n;

    return 0;
}