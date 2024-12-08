#include "Ceasar.h"

Ceasar::Ceasar(std::string phrase, int key) : phrase(std::move(phrase)), key(key)
{
}

std::string Ceasar::Encrypt() const
{
	if (this->phrase.empty())return "";
	std::string ret;
	for (auto& c : this->phrase)
	{ 
		if (c >= 'a' && c <= 'z')ret += c + this->key <= 'z' ? c + this->key : c + this->key - 'z' + 'a' + 1;
		else if (c >= 'A' && c <= 'Z')ret += c + this->key <= 'Z' ? c + this->key : c + this->key - 'Z' + 'A' + 1;
		else if (c >= '0' && c <= '9')ret += c + this->key <= '9' ? c + this->key : c + this->key - '9' + '0' + 1;
		else ret += c;
	}

	return ret;
}

std::string Ceasar::Decrypt() const
{
	if (this->phrase.empty())return "";
	std::string ret;
	for (auto& c : this->phrase)
	{
		if (c >= 'a' && c <= 'z')ret += c - this->key >= 'a' ? c - this->key : c - this->key + 'z'-'a' + 1;
		else if (c >= 'A' && c <= 'Z')ret += c - this->key >= 'A' ? c - this->key : c - this->key + 'Z' - 'A' + 1;
		else if (c >= '0' && c <= '9')ret += c - this->key >= '0' ? c - this->key : c - this->key + '9' - '0' + 1;
		else ret += c;
	}

	return ret;
}
