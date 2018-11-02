#include <Windows.h>
#define MYNEWDLL_EXPORTS_CLASS __declspec(dllexport)
#include "DLLSimpleClass.h"

int TestClass::TestMethod()
{
	return 1000;
}