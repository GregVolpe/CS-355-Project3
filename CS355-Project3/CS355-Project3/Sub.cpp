#include "Sub.h"


Sub::Sub(string name, string parentsName, int args, int localVars)
{
	this->cName = name;
	this->cParentsName = parentsName;
	this->cArguments = args;	
	this->cLocalVars = localVars;
}


Sub::~Sub()
{
}
