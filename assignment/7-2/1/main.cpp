#include "message.h"
#include <iostream>
#include <string>

int main() {
	int x;
	std::string q, s;
	MessageBook mb;
	for (; ;) {
		std::cin >> q;
		if (q == "add") {
			std::cin >> x;
			std::getline(std::cin, s, '\n');
			mb.addMessage(x, s.substr(1));
		} else if (q == "delete") {
			std::cin >> x;
			mb.deleteMessage(x);
		} else if (q == "print") {
			std::cin >> x;
			std::cout << mb.getMessage(x) << '\n';
		} else if (q == "list") {
			auto v = mb.getNumbers();
			for (int i = 0; i < v.size(); ++i) {
				std::cout << v[i] << ": " << mb.getMessage(v[i]) << '\n';
			}
		} else if (q == "quit") break;
	}
	return 0;
}
