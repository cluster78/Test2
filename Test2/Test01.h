#pragma once

#include "ITest.h"

class Test01 : public ITest
{
public:
	Test01(const std::vector<std::string>& a_arrString);
	~Test01();

	virtual void Test() override;
};

