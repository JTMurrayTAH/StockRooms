// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "GenericData/S_Health.h"
#include "GenericData/S_DmgInput.h"
#include "Damageable.generated.h"

// This class does not need to be modified.
UINTERFACE(Blueprintable)
class UDamageable : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class STOCKROOMS_API IDamageable
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	/// Is Object immune to damage?
	/// @return can be damaged?
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Damage")
	bool IsDamageable();
	
	/// What happens when Object is Damaged.
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Damage")
	void OnDamage(FS_DmgInput DmgValue, AActor* Attacker);
	/// When Damage is successful.
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Damage")
	void Success_Damage(UPARAM(ref) FHealth& TargetHp,FS_DmgInput DmgValue, AActor* Attacker);
	/// When Damage is Failed.
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Damage")
	void Failed_Damage(FS_DmgInput DmgValue, AActor* Attacker);
};
