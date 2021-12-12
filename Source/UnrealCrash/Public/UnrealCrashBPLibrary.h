// Hekira Quu

#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"
#include "UnrealCrashBPLibrary.generated.h"

UCLASS()
class UUnrealCrashBPLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_UCLASS_BODY()

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "UnrealCrashNullPtr", Keywords = "UnrealCrash NullPtr", ToolTip = "Warning!!! Crash Immediately"), Category = "UnrealCrash")
	static void UnrealCrashNullPtr();
};
