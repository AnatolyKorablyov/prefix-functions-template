<<<<<<< HEAD
#pragma once

class CSearchDFA;

class CStringUtils
{
public:
	CStringUtils() = delete;

	static unsigned Count(const std::string &text, const CSearchDFA &dfa);
	static bool Contains(const std::string &text, const CSearchDFA &dfa);
	static std::vector<size_t> FindAll(const std::string &text, const CSearchDFA &dfa);
};

=======
#pragma once

class CSearchDFA;

class CStringUtils
{
public:
	CStringUtils() = delete;

	static unsigned Count(const std::string &text, const CSearchDFA &dfa);// 
	static bool Contains(const std::string &text, const CSearchDFA &dfa);//
	static std::vector<size_t> FindAll(const std::string &text, const CSearchDFA &dfa);
};

>>>>>>> 5e94062b2b71f74a27fbff9b1a3c5fedcbb6037d
