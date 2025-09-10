#include <string>
#include <iostream>
using namespace std;

int findSubstring(string text, string pattern) {
    int n = text.size();
    int m = pattern.size();

    if (m == 0) return 0;
    if (m > n) return -1;

    for (int i = 0; i <= n - m; i++) {
        int j = 0;
        while (j < m && text[i + j] == pattern[j]) {
            j++;
        }
        if (j == m) return i;
    }
    return -1;
}
