#include "Includes.h"
#include "App.h"
#include "engine.h"

template <class App>
void ParseEngine(string engine)
{
	if (engine == "engineA")
	{
		Engine * engine = new EngineA<App>();
		engine->Run();
	}
	else
	if (engine == "engineB")
	{
		Engine * engine = new EngineA<App>();
		engine->Run();
	}
}

void ParseApp(string engine, string strapp)
{
	if (strapp == "app1")
		ParseEngine<App1>(engine);
	else if (strapp == "app2")
		ParseEngine<App2>(engine);
}