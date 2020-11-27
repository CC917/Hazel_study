#pragma once

#ifdef HZ_PLATFORM_WINDOWS

namespace Hazel {
	extern Application* CreateApplication();
}
int main(int argc, char* argv[])
{
	auto app = Hazel::CreateApplication();
	app->Run();
	delete app;
	return 0;
}

#endif