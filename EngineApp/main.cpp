#include "Includes.h"

#include "EngineApp.h"

using namespace std;


int main()
{
	string engine;
	string app;
	while (1)
	{
		cin >> engine;
		cin >> app;
		ParseApp(engine, app);
	}
}