#pragma once

#include "CoreMinimal.h"
#include "S_ClimbingStats.generated.h"

USTRUCT(Blueprintable, BlueprintType)
struct STOCKROOMS_API FClimbing_Stats
{
	GENERATED_BODY()

public:


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Speed")
	float SpeedGain;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Health")
	float MaxSpeed;
};
