// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "Collectible.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UCollectible : public UInterface
{
	GENERATED_BODY()
};

/**
 * Interface for all collectible items in the game
 */
class RTL_TEST_API ICollectible
{
	GENERATED_BODY()

public:

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "General") void OnCollect();
};
