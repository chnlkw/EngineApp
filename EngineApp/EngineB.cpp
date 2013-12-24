#include "Includes.h"
#include "engine.h"

#include "App.h"

instantiate_app(EngineB)

template <class App>
void EngineB<App>::Run()
{
	int res = App::func(0);
	cout << "Run EngineB :: " << res * 10 << endl;
}
