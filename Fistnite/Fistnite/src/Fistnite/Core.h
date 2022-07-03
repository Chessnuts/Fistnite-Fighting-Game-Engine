
#pragma once

#ifdef FN_PLATFORM_WINDOWS
	#ifdef FN_BUILD_DLL
		#define FISTNITE_API __declspec(dllexport)
	#else
		#define FISTNITE_API __declspec(dllimport)
	#endif
#else
	#error Fistnite is currently only available for Windows!
#endif
