#include "CallDLL_Run_Time.h"
#include "CallDLL_Link_Time.h"
#include "CallStatic.h"

int main()
{
	int selection = -1;
	while( selection != 0 )
	{
		std::cout << "Type 0 to exit.\n";
		std::cout << "Type 1 and hit enter to call dll functions loaded at runtime.\n";
		std::cout << "Type 2 and hit enter to call dll functions linked at link-time.\n";
		std::cout << "Type 3 and hit enter to call static library functions.\n";
		std::cin >> selection;
		std::cout << "\n";

		switch( selection )
		{
			case 1:
				system( "cls" );
				LoadAndCallDynamicLibraryFunctions_AtRunTime();
				break;
			case 2:
				system( "cls" );
				CallDynamicLibraryFunctions_LinkedAtLinkTime();
				break;
			case 3:
				system( "cls" );
				CallStaticLibraryFunctions();
				break;
			default:
				break;
		}

		std::cout << "\n";
	}

}