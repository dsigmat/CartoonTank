// CartoonTank 2023


#include "PlayerControllerBases.h"

void APlayerControllerBases::SetPlayerEnabledState(bool SetPlayerEnabled)
{
	if (SetPlayerEnabled)
	{
		GetPawn()->EnableInput(this);
	}
	else
	{
		GetPawn()->DisableInput(this);
	}
	bShowMouseCursor = SetPlayerEnabled;
}
