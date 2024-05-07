#include "CallDLL_Run_Time.h"
#include "CallDLL_Link_Time.h"
#include "CallStatic_C.h"
#include "CallStatic_D.h"

int main()
{
	int selection = -1;
	while( selection != 0 )
	{
		std::cout << "Type 1 to call functions from DLL A (loaded at runtime).\n";
		std::cout << "Type 2 to call functions from DLL B (linked at link-time).\n";
		std::cout << "Type 3 to call functions from static library C.\n";
		std::cout << "Type 4 to call functions from static library D (merged to library C).\n";
		std::cout << "\n";
		std::cout << "Type 0 to exit.\n";

		std::cin >> selection;
		std::cout << "\n";

		switch( selection )
		{
			case 1:
				system( "cls" );
				LoadAndCallFunctionsFrom_DynamicLibraryA();
				break;
			case 2:
				system( "cls" );
				CallFunctionsFrom_DynamicLibrary_B();
				break;
			case 3:
				system( "cls" );
				CallFunctionsFrom_StaticLibrary_C();
				break;
			case 4:
				system( "cls" );
				CallFunctionsFrom_StaticLibrary_D();
				break;
			default:
				break;
		}

		std::cout << "\n";
	}

}