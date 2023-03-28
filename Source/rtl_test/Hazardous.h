// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "Hazardous.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UHazardous : public UInterface
{
	GENERATED_BODY()
};

/**
 * Items in game that is hazardous to the player character
 */
class RTL_TEST_API IHazardous
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "General") void OnInteract();
};
