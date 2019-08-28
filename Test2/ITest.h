#pragma once
class ITest
{
public:
	ITest(const std::vector<std::string>&) {}
	ITest(const std::vector<int>&) {}
	ITest(const std::vector<std::vector<int>>&){}
	virtual void Test() = 0;
};
