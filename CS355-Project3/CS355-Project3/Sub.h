#pragma once
#include <string>
#include <vector>
using namespace std;
class Sub
{
public:
	Sub(string,string,int,int);
	~Sub();

private:
	string cName;
	string cParentsName;
	vector<string> cChildrensNames;
	int cArguments;
	int cLocalVars;
	int cStaticDepth;
};