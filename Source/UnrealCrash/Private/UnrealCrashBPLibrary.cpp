// Hekira Quu

#include "UnrealCrashBPLibrary.h"
#include "UObject/Object.h"
#include "UnrealCrash.h"

UUnrealCrashBPLibrary::UUnrealCrashBPLibrary(const FObjectInitializer& ObjectInitializer)
: Super(ObjectInitializer)
{

}

void UUnrealCrashBPLibrary::UnrealCrashNullPtr()
{
	 TArray<UObject*> test;
	 test[1]->GetDesc();
}

