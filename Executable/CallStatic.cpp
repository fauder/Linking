#include "CallStatic.h"

#include "..\[C]-Static-Lib-1\Static.h"

#include <iostream>

int CallStaticLibraryFunctions()
{
	std::cout << "Calling static lib. function \"StaticLibrary::Bar\":\n\t" << StaticLibrary::Bar() << "\n";
	std::cout << "Calling static lib. function \"StaticLibrary::Baz\":\n\t" << StaticLibrary::Baz() << "\n";
	std::cout << "Calling static lib. function \"StaticLibrary::ReturnInteger\":\n\t" << StaticLibrary::ReturnInteger() << " is returned by the static lib. function \"StaticLibrary::ReturnInteger\".\n";
	std::cout << "Calling static lib. function \"StaticLibrary::ReturnVoid\":\n\t";
	StaticLibrary::ReturnVoid();
	std::cout << "\n";
	std::cout << "Calling static lib. function \"StaticLibrary::Foo\":\n\t" << StaticLibrary::Foo() << "\n";
	return 0;
}