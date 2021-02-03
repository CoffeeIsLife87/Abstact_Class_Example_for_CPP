/*-----------------------------------------------------------------------------------------------------------------------------------------------------*\
| This file is responsable for telling the main script what it can expect from a class																	|
| With the things defined in this file the main code now knows that it can call PrintText() and that is has a return type of void with no arguments		|
| The main code DOES NOT know the actual details																										|
| PrintText can do anything you want it to but it MUST return void and not take arguments																|
\*-----------------------------------------------------------------------------------------------------------------------------------------------------*/

class BasicInterface {
public:
	BasicInterface() {}; // The constuctor and destructor do not have to have anything in them for this to work, They do, however, Need to exist
	~BasicInterface() {};
	/*---------------------------------------------------------------------------------------------------------*\
	| Virtual tells main that this is an empty function, "= 0" Tells the program that it MUST be overridden		|
	\*---------------------------------------------------------------------------------------------------------*/
	virtual void PrintText() = 0;
};