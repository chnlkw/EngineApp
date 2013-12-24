#pragma once

class App
{
public:
	static int func(int input);
};

class App1
{
public:
	static int func(int input)
	{
		return input + 1;
	}
};

class App2
{
public:
	static int func(int input)
	{
		return input + 2;
	}
};

#define instantiate_app(Engine) \
	template void Engine<App1>::Run(); \
	template void Engine<App2>::Run();
