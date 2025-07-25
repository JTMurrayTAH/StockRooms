#pragma once

#include "CoreMinimal.h"
#include "S_Health.generated.h"

USTRUCT(Blueprintable, BlueprintType)
struct FHealth
{
	GENERATED_BODY()

public:
	FHealth()
		: Current(100.f), Max(100.f), Regen(0.f)
	{
	}

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Health")
	float Current;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Health")
	float Max;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Health")
	float Regen;
};
