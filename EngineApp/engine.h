#pragma once

class Engine
{
public:
	virtual void Run() = 0;
};

template <class App>
class EngineA : public Engine
{
public:
	virtual void Run() override;
};

template <class App>
class EngineB : public Engine
{
public:
	virtual void Run() override;
};
