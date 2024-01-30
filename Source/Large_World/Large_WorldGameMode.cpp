// Copyright Epic Games, Inc. All Rights Reserved.

#include "Large_WorldGameMode.h"
#include "Large_WorldCharacter.h"
#include "UObject/ConstructorHelpers.h"

ALarge_WorldGameMode::ALarge_WorldGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
