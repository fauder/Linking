#include "Static_D.h"

namespace StaticLibraryD
{
	const char* Bar()
	{
		return "StaticLibraryD::Bar(): Reporting from inside the static library D.";
	}

	const char* Baz()
	{
		return "StaticLibraryD::Baz(): Reporting from inside the static library D.";
	}

	int ReturnInteger()
	{
		return 444;
	}

	const char* StaticLibraryD::Foo()
	{
		return "StaticLibraryD::Foo(): Reporting from inside the static library D.";
	}
}
