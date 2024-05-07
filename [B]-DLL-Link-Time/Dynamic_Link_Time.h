#pragma once

#include <iostream>

#ifndef DLLAPI
	#ifdef EXPORTING_DLL
		#define DLL_API _declspec( dllexport )
	#else
		#define DLL_API _declspec( dllimport )
	#endif
#endif // DLLAPI

DLL_API const char* Bar();
DLL_API const char* Baz();
DLL_API int ReturnInteger();
DLL_API void ReturnVoid();

namespace DynamicLibrary_LinkTime
{
	DLL_API const char* Foo();
}
