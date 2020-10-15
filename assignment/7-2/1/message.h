#ifndef __MESSAGE_H__
#define __MESSAGE_H__

#include <string>
#include <vector>
#include <map>

class MessageBook {
private:
	std::map < int, std::string > msg;
public:
	MessageBook();
	~MessageBook();
	void addMessage(int, const std::string&);
	void deleteMessage(int);
	std::vector < int > getNumbers();
	const std::string& getMessage(int);
};

#endif
