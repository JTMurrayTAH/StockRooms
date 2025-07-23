// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "Interact.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UInteract : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class STOCKROOMS_API IInteract
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	/// Is the object Interactable.
	/// @return True or false, if it can interact.
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Interact")
	bool CanInteract(AActor* Interactor);

	/// On a successful Interact.
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Interact")
	void Successful_Interact(AActor* Interactor);

	/// On a failed Interact.
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Interact")
	void Failed_Interact(AActor* Interactor);
};
