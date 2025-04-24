#pragma once

#ifdef EL_PLATFORM_WINDOWS
	#ifdef ELISE_BUILD_DLL
		#define	ELISE_API __declspec(dllexport)
	#else
		#define ELISE_API __declspec(dllimport)
	#endif // ELISE_BUILD_DLL
#else
	#error Elise only supports windows!
#endif