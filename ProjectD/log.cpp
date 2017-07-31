#include "log.h"

void Log::setLevel(Logtype level) {
	m_level = level;
}

void Log::e(std::string message) {
	if (m_level >= ERROR)
		std::cout << "[ERROR]: " << message << std::endl;
}

void Log::w(std::string message) {
	if (m_level >= WARNING)
		std::cout << "[WARNING]: " << message << std::endl;
}

void Log::i(std::string message) {
	if (m_level >= INFO)
		std::cout << "[INFO]: " << message << std::endl;
}

void Log::d(std::string message) {
	if (m_level >= DEBUG)
		std::cout << "[DEBUG]: " << message << std::endl;
}