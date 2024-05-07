#pragma once

#include <iostream>

_declspec( dllexport ) const char* Bar();

extern "C"
{
	_declspec( dllexport ) const char* Baz();
	_declspec( dllexport ) int ReturnInteger();
	_declspec( dllexport ) void ReturnVoid()
	{
		std::cout << "ReturnVoid(): Reporting from inside the DLL (loaded at runtime).";
	}

	namespace DynamicLibrary
	{
		_declspec( dllexport ) const char* Foo();
	}
}
