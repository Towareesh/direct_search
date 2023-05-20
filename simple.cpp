#include <string>
#include <iostream>

using namespace std;


bool direct_serch(string data, string pattern) {
    int len_data = data.length();
    int len_pattern = pattern.length();

    if (len_pattern > len_data) {
        return false;
    }

    int string_indx = 0;
    int pattern_indx = 0;

    while ((pattern_indx < len_pattern) and (string_indx < len_data)) {
        if (data[string_indx + pattern_indx] == pattern[pattern_indx]) {
            pattern_indx ++;
        }
        else {
            string_indx ++;
            pattern_indx = 0;
        }
    }

    bool result = false;
    if (pattern_indx == len_pattern) {
        result = true;
    }
    return result;
}

string input(string tmp="") {
    cout << tmp;
    string input;
    getline(cin, input);
    return input;
}

void print(auto values) {
    cout << values;
}

main() {
    string data = input("Set text: ");
    string pattern = input("Set pattern: ");
    print(direct_serch(data, pattern));
}
