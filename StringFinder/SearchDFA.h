#pragma once

class CSearchDFA
{
public:
	CSearchDFA();
	~CSearchDFA();

	void Compile(const std::string &needle);
	size_t Find(const std::string &text, size_t from = 0) const;

private:
	std::string m_needle;
};
