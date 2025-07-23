#pragma once

#include "CoreMinimal.h"
#include "S_Stamina.generated.h"

USTRUCT(Blueprintable, BlueprintType)
struct STOCKROOMS_API FStamina
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stamina")
	float Current;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stamina")
	float Max;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stamina")
	float Regen;
};
