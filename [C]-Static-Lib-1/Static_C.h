#pragma once

#include <iostream>

/* Putting all functions in namespace to avoid "one or more multiply defined symbols found" linker error. */

namespace StaticLibraryC
{
	const char* Bar();

	const char* Baz();
	int ReturnInteger();
	inline void ReturnVoid()
	{
		std::cout << "StaticLibraryC::ReturnVoid(): Reporting from inside the static library C.";
	}

	const char* Foo();
}