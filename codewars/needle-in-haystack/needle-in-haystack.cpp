#include <cstdio>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

string findNeedle(vector<string> haystack) {
    for (int i = 0; haystack.size(); i++) {
        if (haystack[i] == "needle") {
            return "found the needle at position " + to_string(i);
        }
    }
    return "";
}

int main() {
    string res = findNeedle({ "hay", "junk", "hay", "hay", "moreJunk", "needle", "randomJunk" });
    cout << res;
}
