<<<<<<< HEAD
#include "stdafx.h"
#include "SearchDFA.h"

CSearchDFA::CSearchDFA()
{
}

CSearchDFA::~CSearchDFA()
{
}

void CSearchDFA::Compile(const std::string &needle)
{
	m_needle = needle;
	// TODO: ����������� "�������" ���������� �������� � �������������� �������-�������.
}

size_t CSearchDFA::Find(const std::string &text, size_t from) const
{
	// TODO: ����������� ����� "��-��������".

	// ���������: ����� ������������ boost::string_ref, ����� �� ��������� ��������� �� ������.
	// ��� �������� �������������� ��������� ������ Search �� ����� ������.
	
	return text.find(m_needle, from);
}
=======
#include "stdafx.h"
#include "SearchDFA.h"

CSearchDFA::CSearchDFA()
{
}

CSearchDFA::~CSearchDFA()
{
}

void CSearchDFA::Compile(const std::string &needle)
{
	m_needle = needle;
	// TODO: ����������� "�������" ���������� �������� � �������������� �������-�������.
}

size_t CSearchDFA::Find(const std::string &text, size_t from) const
{
	// TODO: ����������� ����� "��-��������".

	// ���������: ����� ������������ boost::string_ref, ����� �� ��������� ��������� �� ������.
	// ��� �������� �������������� ��������� ������ Search �� ����� ������.
	
	return text.find(m_needle, from);
}
>>>>>>> 5e94062b2b71f74a27fbff9b1a3c5fedcbb6037d
