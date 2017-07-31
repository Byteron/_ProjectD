#pragma once

#include <iostream>
#include <string>

class Log {

public:
	enum Logtype { ERROR, WARNING, INFO, DEBUG };
private:
	Logtype m_level;
public:
	void setLevel(Logtype level);
	void e(std::string message);
	void w(std::string message);
	void i(std::string message);
	void d(std::string message);
};
