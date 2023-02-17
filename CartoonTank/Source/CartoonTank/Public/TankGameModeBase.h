// CartoonTank 2023

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "TankGameModeBase.generated.h"

/**
 *
 */
UCLASS()
class CARTOONTANK_API ATankGameModeBase : public AGameModeBase
{
	GENERATED_BODY()

private:

	void HandleGameStart();

	void HandleGameOver(bool PlayerWon);

public:

	void ActorDied(AActor* DeadActor);

protected:

	virtual void BeginPlay() override;

	UFUNCTION(BlueprintImplementableEvent)
		void GameStart();

	UFUNCTION(BlueprintImplementableEvent)
		void GameOver(bool PlayerWon);
};
