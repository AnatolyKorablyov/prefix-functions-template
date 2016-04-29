<<<<<<< HEAD
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
=======
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
>>>>>>> 5e94062b2b71f74a27fbff9b1a3c5fedcbb6037d
