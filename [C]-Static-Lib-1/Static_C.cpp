#include "Static_C.h"

namespace StaticLibraryC
{
	const char* Bar()
	{
		return "StaticLibraryC::Bar(): Reporting from inside the static library C.";
	}

	const char* Baz()
	{
		return "StaticLibraryC::Baz(): Reporting from inside the static library C.";
	}

	int ReturnInteger()
	{
		return 333;
	}

	const char* StaticLibraryC::Foo()
	{
		return "StaticLibraryC::Foo(): Reporting from inside the static library C.";
	}
}
