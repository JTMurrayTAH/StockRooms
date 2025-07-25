﻿// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GenericData/S_DmgInput.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Stockrooms/Public/Interfaces/Damageable.h"
#include "GenericData/S_Health.h"
#include "HsDamage.generated.h"

/**
 * 
 */
UCLASS()
class STOCKROOMS_API UHsDamage : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

	public:
	UFUNCTION(BlueprintCallable, Category = "HelperScript|Damage")
	static void TryDamage(TScriptInterface<IDamageable> Target, UPARAM(ref) FHealth& TargetHp, FS_DmgInput DmgValue, AActor* Attacker);
	
	UFUNCTION(BlueprintCallable, Category = "HelperScript|Damage")
	static void OnDamage(UPARAM(ref) FHealth& TargetHp, FS_DmgInput DmgValue);

	UFUNCTION(BlueprintCallable, Category = "HelperScript|Health|Generic")
	static bool IsDead(UPARAM(ref) FHealth& TargetHp);
};
