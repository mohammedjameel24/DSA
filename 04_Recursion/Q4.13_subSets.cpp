#include <iostream>
#include <string.h>
#include <vector>
using namespace std;


void subSets(string str, int index = 0, string curr = "")
{
	int n = str.length();

	if (index == n) {
		cout << curr << endl;
		return;
	}

	subSets(str, index + 1, curr + str[index]);
	subSets(str, index + 1, curr);
}
int countUniqueChars(string s) {
    vector<int> freq(26, 0);
    int count = 0;
    for (char c : s) {
        if (freq[c - 'A'] == 0) {
            count++;
        }
        freq[c - 'A']++;
    }
    return count;
}

int countSubstringUniqueChars(string s) {
    int n = s.length();
    int res = 0;
    for (int k = 1; k <= n; k++) {
        for (int i = 0; i <= n - k; i++) {
            string t = s.substr(i, k);
            res += countUniqueChars(t);
        }
    }
    return res;
}

int main()
{
	string str = "ABA";
	//subSets(str);
	cout << countSubstringUniqueChars(str);
	return 0;
}
