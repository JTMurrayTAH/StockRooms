// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Interfaces/Interact.h"
#include "CPP_InteractableMaster.generated.h"

UCLASS(BlueprintType, Blueprintable, ABSTRACT)
 class STOCKROOMS_API ACPP_InteractableMaster : public AActor, public IInteract
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ACPP_InteractableMaster();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
};
