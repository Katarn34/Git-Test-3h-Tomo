// Copyright Epic Games, Inc. All Rights Reserved.

#include "Test_3h_TomoGameMode.h"
#include "Test_3h_TomoCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATest_3h_TomoGameMode::ATest_3h_TomoGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
