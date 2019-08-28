#include "pch.h"
#include "Test02.h"

Test02::Test02(const std::vector<int>& a_arrString) : ITest(a_arrString)
{
	if ((a_arrString[0] > 99999) || (a_arrString[0] < 0) || (a_arrString[0] < 10000))
	{
		cout << "입력오류" << endl;
		return;
	}

	int input = a_arrString[0];
	int arr[5] = { 0, };
	int cal = 10;
	int cal2 = 1;

	for (int i = 1; i <= 5; i++)
	{
		arr[i - 1] = input % cal;
		input -= arr[i-1];
		arr[i - 1] /= cal2;

		cal *= 10;
		cal2 *= 10;
	}

	int add = 0;

	for (int i = 0; i < 5; i++)
	{
		add += (arr[i] * arr[i]);
	}

	cout << add % 10 << endl;
}

Test02::~Test02()
{
}

void Test02::Test()
{
	Test02 a{ {11905} };
	
	Test02 b{ {1234} };
	
	Test02 c{ {-1} };
	
	Test02 d{ {11-7-51} };
	
	Test02 e{ {00000} };

	// 각종 테스트 최소 5개이상
}