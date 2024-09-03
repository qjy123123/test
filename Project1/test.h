#ifndef _TEST_
#define _TEST_
#include <iostream>

#ifdef BHDLL__//如果没有定义DLLH 就定义 DLLH __declspec(dllexport)
#define BHDLL __declspec(dllexport)//导出
#else
#define BHDLL __declspec(dllimport)//导入
#endif // DLLH__//如果没有定义DLLH 就定义 DLLH 


class BHDLL MyClass
{
public:
	MyClass();
	~MyClass();

	void fun();
private:

};


#endif // !_TEST_
