#pragma once

#include "CoreMinimal.h"
#include "S_Money.generated.h"

USTRUCT(Blueprintable, BlueprintType)
struct FMoney
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Money")
	float Total;
};
