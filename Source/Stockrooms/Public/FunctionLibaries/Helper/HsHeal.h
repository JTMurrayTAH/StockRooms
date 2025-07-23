// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Stockrooms/Public/Interfaces/Healable.h"
#include "HsHeal.generated.h"

/**
 * 
 */
UCLASS()
class STOCKROOMS_API UHsHeal : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintCallable, Category = "HelperScript|Heal")
	static void TryToHeal(TScriptInterface<IHealable> Target, UPARAM(ref) FHealth& TargetHp, float HealValue, AActor* Healer);

	UFUNCTION(BlueprintCallable, Category = "HelperScript|Heal")
	static void OnHeal(UPARAM(ref) FHealth& TargetHp, float HealValue);
};
