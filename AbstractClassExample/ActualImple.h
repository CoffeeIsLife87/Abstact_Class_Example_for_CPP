#include "BasicInterface.h"

/*-------------------------------------------------------------------------------------------------------------------------------------*\
| This file contains the class with the actual implementation of the functions															|
| For ActualImplementation to get added to a vector of BasicInterface* it must inherit BasicInteface									|
| You can have as many functions as you want in here but only the functions defined in the interface can be declared override			|
\*-------------------------------------------------------------------------------------------------------------------------------------*/

class ActualImplementaion: public BasicInterface
{
public:
	ActualImplementaion() {};
	~ActualImplementaion() {};
	/*-----------------------------------------------------------------------------------------------------------------------------*\
	| You will notice that not only the name, but the casing as well are the same as in the interface								|
	| the override specifier is what makes it so that the virtual function in the inherited class is replace with the real function |
	\*-----------------------------------------------------------------------------------------------------------------------------*/
	void PrintText() override;
};