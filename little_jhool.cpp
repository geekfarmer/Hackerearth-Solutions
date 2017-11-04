#include <iostream>

int main()
{
	int c = 0;
	bool luck = true;
	std::string s;
	std::cin >> s;
	for (int i = 1; i < s.size(); i++) {
		if (s[i] == s[i - 1]) {
			c++;
		}
		else {
			c = 0;
		}
		if (c == 5) {
			std::cout << "Sorry, sorry!";
			luck = false;
			break;
		}
	}
	if (luck) {
		std::cout << "Good luck!";
	}
}
