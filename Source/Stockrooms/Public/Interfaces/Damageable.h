// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"

#include "Damageable.generated.h"

// This class does not need to be modified.
UINTERFACE()
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
	bool IsDamageable();

	/// What happens when Object is Damaged.
	void OnDamage(float& DmgValue, AActor* Attacker);
	/// When Damage is successful.
	void Success_Damage(float& DmgValue, AActor* Attacker);
	/// When Damage is Failed.
	void Failed_Damage(float& DmgValue, AActor* Attacker);
};
