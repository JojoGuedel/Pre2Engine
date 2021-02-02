#pragma once

#ifdef P2E_PLATFORM_WINDOWS
	#ifdef P2E_BUILD_DLL
		#define P2E_API __declspec(dllexport)
	#else
		#define P2E_API __declspec(dllimport)
	#endif
	#else 
		#error Pre2Engine only supports Windows
#endif