#ifndef KEYBOARD_H_INCLUDED
#define KEYBOARD_H_INCLUDED

#include <map>
#include <string>
#include <utility>

class Keyboard {
  //A keyboard is a set of named points in a 2D space
public:
	typedef std::pair<double,double> location;
	struct Key {
		location pos;
	};
	
	
private:
	std::map<std::string,Key>
};

#endif //KEYBOARD_H_INCLUDED