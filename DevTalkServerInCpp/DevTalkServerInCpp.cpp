// DevTalkServerInCpp.cpp : �⺻ ������Ʈ �����Դϴ�.

#include "stdafx.h"
#include <thread>

using namespace System;

int main(array<System::String ^> ^args)
{
    Console::WriteLine(L"Hello World");

	std::thread first(foo);
	std::thread second(bar, 0);
    return 0;
}

void foo() {
	Console::WriteLine("foo");
}

void bar(int x) {
	Console::WriteLine("bar : " + )
}
