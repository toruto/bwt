#ifndef BURROWS_WHEELER_H
#define BURROWS_WHEELER_H

#include <string>
#include <algorithm>

class bwt
{
	private:
		std::string lf_mapping(const std::string &text);
	public:
		std::string transform(const std::string &text);
		std::string inverse(const std::string &text);
};

std::string bwt::transform(const std::string &text) {
	const unsigned int length = text.length(); 
	std::string block[length];

	for (int i=0;i<length;++i)
	{
		block[i] = text.substr(i,length) + text.substr(0, i);
	}
	sort(block, block + length);
	std::string transformed = "";
	for (int i=0;i<length;++i)
	{
		std::cout << block[i] << std::endl;
		transformed += block[i][length - 1];
	}
	return transformed;
}

std::string bwt::inverse(const std::string &text) {
	return text;
}

std::string bwt::lf_mapping(const std::string &text) {
	return text;
}

#endif

