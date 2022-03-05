// non-standard but widely supported preprocessor directive designed to cause the current source file to be included only once in a single compilation.
#pragma once

// prevents double declaration of any identifiers such as types, enums and static variables.
#ifndef NAME_H
#define NAME_H

#include <string>
#include <iostream>

using namespace std;

class Name {
private:
	string first;
	string last;
public:
	Name(string, string);
	void displayFullName();
};

#endif
