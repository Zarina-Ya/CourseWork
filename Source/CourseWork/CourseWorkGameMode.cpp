// Copyright Epic Games, Inc. All Rights Reserved.

#include "CourseWorkGameMode.h"
#include "CourseWorkCharacter.h"
#include "UObject/ConstructorHelpers.h"

ACourseWorkGameMode::ACourseWorkGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
