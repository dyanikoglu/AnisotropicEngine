#pragma once

class Application
{
public:
	Application() {}
	Application(const Application&) = delete;
	Application operator=(const Application&) = delete;
	
	virtual ~Application() {}
	virtual void Initialize() {}
	virtual void Update(float DeltaTime) {}
	virtual void Render(float AspectRatio) {}
	virtual void Shutdown() {}
};
