// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "EscapeUE4GameMode.h"
#include "EscapeUE4Character.h"
#include "UObject/ConstructorHelpers.h"

AEscapeUE4GameMode::AEscapeUE4GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
