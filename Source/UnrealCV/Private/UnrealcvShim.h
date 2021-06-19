// Weichao Qiu @ 2018
// Provide abstraction for different engine versions
#pragma once

#include "CoreMinimal.h"
#include "Runtime/Launch/Resources/Version.h"
#include "Runtime/Core/Public/Misc/App.h"

inline FString GetProjectName()
{
	FString SceneName = FApp::GetProjectName();
	return SceneName;
}
