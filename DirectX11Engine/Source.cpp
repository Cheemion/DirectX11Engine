#include "Engine.h"

int APIENTRY wWinMain(_In_ HINSTANCE hInstance,
	_In_opt_ HINSTANCE hPrevInstance,
	_In_ LPWSTR lpCmdLine,
	_In_ int nCmdShow) 
{
	Engine engine;
	engine.Initialize(hInstance, "Titie", "MyClass", 800, 600);
	while (engine.ProcessMessages() == true) {
		engine.Update();
		engine.RenderFrame();
	}
	return 0;
}