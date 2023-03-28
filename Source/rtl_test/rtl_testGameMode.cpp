// Copyright Epic Games, Inc. All Rights Reserved.

#include "rtl_testGameMode.h"
#include "rtl_testCharacter.h"
#include "UObject/ConstructorHelpers.h"

Artl_testGameMode::Artl_testGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
