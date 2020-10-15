#include "message.h"

MessageBook::MessageBook() {}
MessageBook::~MessageBook() {}

void MessageBook::addMessage(int x, const std::string& msg) {
	this->msg[x] = msg;
}
void MessageBook::deleteMessage(int x) {
	auto iTer = msg.find(x);
	if (iTer == msg.end()) return;
	msg.erase(iTer);
}
std::vector < int > MessageBook::getNumbers() {
	std::vector < int > v;
	for (auto iTer = msg.begin(); iTer != msg.end(); ++iTer) {
		v.push_back(iTer->first);
	}
	return v;
}
const std::string& MessageBook::getMessage(int x) {
	return msg[x];
}
