#include <iostream>
#include <string.h>
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

int main()
{
	string str = "abc";
	subSets(str);
	return 0;
}
