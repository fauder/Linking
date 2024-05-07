#include "Static.h"

namespace StaticLibrary
{
	const char* Bar()
	{
		return "StaticLibrary::Bar(): Reporting from inside the static library.";
	}

	const char* Baz()
	{
		return "StaticLibrary::Baz(): Reporting from inside the static library.";
	}

	int ReturnInteger()
	{
		return 39;
	}

	const char* StaticLibrary::Foo()
	{
		return "StaticLibrary::Foo(): Reporting from inside the static library.";
	}
}
