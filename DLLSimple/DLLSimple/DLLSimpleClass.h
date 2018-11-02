#pragma once


#ifdef MYNEWDLL_EXPORTS_CLASS
/* This means that we define the exports that we define */

#else
/* If the file dosn't find the Dll it will export it */
#define MYNEWDLL_EXPORTS_CLASS __declspec(dllimport)

#endif

// Export class
class MYNEWDLL_EXPORTS_CLASS TestClass
{
public:
	TestClass(){}
	~TestClass(){}

public:
	int TestMethod();

};

