#include "CallStatic_D.h"

#include "..\[D]-Static-Lib-2\Static_D.h"

#include <iostream>

int CallFunctionsFrom_StaticLibrary_D()
{
	std::cout << "Calling static lib. function \"StaticLibraryD::Bar\":\n\t" << StaticLibraryD::Bar() << "\n";
	std::cout << "Calling static lib. function \"StaticLibraryD::Baz\":\n\t" << StaticLibraryD::Baz() << "\n";
	std::cout << "Calling static lib. function \"StaticLibraryD::ReturnInteger\":\n\t" << StaticLibraryD::ReturnInteger() << " is returned by the static lib. function \"StaticLibraryD::ReturnInteger\".\n";
	std::cout << "Calling static lib. function \"StaticLibraryD::ReturnVoid\":\n\t";
	StaticLibraryD::ReturnVoid();
	std::cout << "\n";
	std::cout << "Calling static lib. function \"StaticLibraryD::Foo\":\n\t" << StaticLibraryD::Foo() << "\n";
	return 0;
}