#include <iostream>

int main()
{
	bool b = true;
	std::string s;
	std::cin >> s;
	for (int i = 0; i < s.size()/2; i++) {
		if (s[i] != s[s.size() - i - 1]) {
			std::cout << "NO";
			b = false;
			break;
		}
	}
	if (b) {
		std::cout << "YES";
	}
}
