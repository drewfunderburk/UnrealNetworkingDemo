// Copyright Epic Games, Inc. All Rights Reserved.

#include "NetworkingDemoGameMode.h"
#include "NetworkingDemoCharacter.h"
#include "UObject/ConstructorHelpers.h"

ANetworkingDemoGameMode::ANetworkingDemoGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
