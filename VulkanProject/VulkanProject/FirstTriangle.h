#pragma once
#include <vulkan/vulkan.h>
#include <iostream>
#include <stdexcept>
#include <cstdlib>
class FirstTriangle
{
public:
	void Run();

private:
	void InitVulkan();
	void MainLoop();
	void CleanUp();
};

