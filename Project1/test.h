#ifndef _TEST_
#define _TEST_
#include <iostream>

#ifdef BHDLL__//���û�ж���DLLH �Ͷ��� DLLH __declspec(dllexport)
#define BHDLL __declspec(dllexport)//����
#else
#define BHDLL __declspec(dllimport)//����
#endif // DLLH__//���û�ж���DLLH �Ͷ��� DLLH 


class BHDLL MyClass
{
public:
	MyClass();
	~MyClass();

	void fun();
private:

};


#endif // !_TEST_
