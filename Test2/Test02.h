#pragma once

#include "ITest.h"

class Test02 : public ITest
{
public:
	Test02() : ITest(m_arrString) {}
	Test02(const std::vector<int>& a_arrString);
	~Test02();

	virtual void Test() override;

	const std::vector<int>& m_arrString = { {0} };
};

