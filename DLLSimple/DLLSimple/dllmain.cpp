// dllmain.cpp : Defines the entry point for the DLL application.
#include <Windows.h>
#define MYNEWDLL_EXPORTS extern "C" __declspec(dllexport)
#include "DLLSimple.h"

// Code for this DLL
int g_nResult = 10;

// Exported funtion to add two numbers
int AddTwoNumbers(int n1, int n2)
{
	int iResult = n1 + n2;
	return iResult;
}