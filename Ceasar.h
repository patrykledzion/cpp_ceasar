#pragma once
#include <iostream>

class Ceasar
{
private:
	std::string phrase;
	int key;
public:
	Ceasar(std::string phrase, int key);
	~Ceasar() = default;
	std::string Encrypt() const;
	std::string Decrypt() const;
};

