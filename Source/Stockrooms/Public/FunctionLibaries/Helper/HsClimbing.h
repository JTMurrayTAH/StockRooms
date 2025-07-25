// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "HsClimbing.generated.h"

/**
 * 
 */
UCLASS()
class STOCKROOMS_API UHsClimbing : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "Climbing|Utility")
	static FHitResult LineTrace_Generic(UObject* WorldContextObject, FVector Forward, FVector Start, float Length, AActor* IgnoreActor = nullptr);

};
