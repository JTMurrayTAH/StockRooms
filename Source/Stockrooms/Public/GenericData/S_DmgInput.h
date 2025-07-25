#pragma once

#include "CoreMinimal.h"
#include "S_DmgInput.generated.h"

USTRUCT(Blueprintable, BlueprintType)
struct FS_DmgInput
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Damage")
	float FleshDmg;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stamina")
	float StaminaDmg;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stamina")
	float Regen;
};
