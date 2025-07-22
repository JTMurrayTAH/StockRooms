// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"

#include "Healable.generated.h"

// This class does not need to be modified.
UINTERFACE()
class UHealable : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class STOCKROOMS_API IHealable
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	/// Is Object immune to Healing?
	/// @return can be Healed?
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Heal")
	bool IsHealable();

	/// What happens when Object is Healed.
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Heal")
	void OnHeal(float DmgValue, AActor* Attacker);
	/// When Healing is successful.
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Heal")
	void Success_Heal(float DmgValue, AActor* Attacker);
	/// When Healing is Failed.
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Heal")
	void Failed_Heal(float DmgValue, AActor* Attacker);
};
