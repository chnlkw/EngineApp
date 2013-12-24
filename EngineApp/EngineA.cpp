#include "Includes.h"
#include "engine.h"

#include "App.h"

instantiate_app(EngineA)

template <class App>
void EngineA<App>::Run()
{
	int res = App::func(0);
	cout << "Run EngineA :: " << res << endl;
}
