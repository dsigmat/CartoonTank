// CartoonTank 2023

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "PlayerControllerBases.generated.h"


UCLASS()
class CARTOONTANK_API APlayerControllerBases : public APlayerController
{
	GENERATED_BODY()

public:

	void SetPlayerEnabledState(bool SetPlayerEnabled);
	
};
