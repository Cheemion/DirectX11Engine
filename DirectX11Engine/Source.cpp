#include "Engine.h"
#pragma comment(lib, "d3d11.lib")
#pragma comment(lib, "DirectXTk.lib")

int APIENTRY wWinMain(_In_ HINSTANCE hInstance,
	_In_opt_ HINSTANCE hPrevInstance,
	_In_ LPWSTR lpCmdLine,
	_In_ int nCmdShow) 
{
	Engine engine;
	engine.Initialize(hInstance, "Titie", "MyClass", 800, 600);
	while (engine.ProcessMessages() == true) {

	}
	return 0;
}