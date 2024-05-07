#pragma once

#include <iostream>

/* Putting all functions in namespace to avoid "one or more multiply defined symbols found" linker error. */

namespace StaticLibraryD
{
	const char* Bar();

	const char* Baz();
	int ReturnInteger();
	inline void ReturnVoid()
	{
		std::cout << "StaticLibraryD::ReturnVoid(): Reporting from inside the static library D.";
	}

	const char* Foo();
}