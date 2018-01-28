// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "SmashCloneGameMode.h"
#include "SmashCloneCharacter.h"
#include "UObject/ConstructorHelpers.h"

ASmashCloneGameMode::ASmashCloneGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/SideScrollerCPP/Blueprints/SideScrollerCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
