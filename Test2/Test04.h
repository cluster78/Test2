#pragma once
#include "ITest.h"

class Test04 : public ITest
{

public:
	Test04() : ITest(m_arrString) {}
	Test04(const std::vector<std::vector<int>>&);
	Test04(const std::vector<int>& a_arrString);
	~Test04();

	virtual void Test() override;

	const std::vector<std::vector<int>>& m_arrString = { {0} };
};



