#include <iostream>
#include <string>

using namespace std;

void Erase(string s, string c1, string c2) {
	size_t pos = s.find(c1, 0);
	size_t pos2 = s.find(c2,0);
	size_t len = pos2 - pos;
	if (s.find(c1, pos + 1) == -1 && s.find(c2, pos2+1) == -1) {
		s.erase(pos, len + 1);
		cout << s;
	}
	else
		cout << "Error";
}

int main() {
	cout << "Enter a string:" << endl;
	string s;
	cin >> s;
	cout << endl;
	string c1 = "(";
	string c2 = ")";
	cout << "After erasing:" << endl;
	Erase(s, c1, c2);

	return 0;
}