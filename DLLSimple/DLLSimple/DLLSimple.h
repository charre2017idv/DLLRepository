#pragma once

#ifdef MYNEWDLL_EXPORTS
/* This means that we define the exports that we define */

#else
/* If the file dosn't find the Dll it will export it */
#define MYNEWDLL_EXPORTS extern "C" __declspec(dllimport)

#endif

// Define exported variables here. (NOTE: Avoid exporting
MYNEWDLL_EXPORTS int g_nResult;

// Define exported function prototypes here
MYNEWDLL_EXPORTS int AddTwoNumbers(int n1, int n2);