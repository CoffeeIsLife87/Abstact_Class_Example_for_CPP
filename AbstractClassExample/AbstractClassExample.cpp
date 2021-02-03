#include <iostream>
#include "ActualImple.h"
#include <vector>

int main()
{
	std::vector<BasicInterface*> InterfaceList; // This is the list of classes that use BasicInterface. While dynamic addition to this vector is possible I am not sure how atm
	ActualImplementaion* Imple = new ActualImplementaion(); // Create an instance of ActualImplementation
	InterfaceList.push_back(Imple); // Notice that even tho the actual template of the vector is BasicInterface you can still put ActualImplementation in the vector because it uses BasicInterface
	InterfaceList[0]->PrintText(); // This calls the printText function overridden by ActualImplementation
	return 0; // Exits
}
