// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GenericData/S_ClimbingStats.h"
#include "GenericData/S_Stamina.h"
#include "CPP_AC_Climbing.generated.h"


UCLASS(Blueprintable,ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class STOCKROOMS_API UCPP_AC_Climbing : public UActorComponent
{
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
	UCPP_AC_Climbing();
	
	UPROPERTY(Blueprintable, BlueprintReadWrite, Category = "Climbing")
	FClimbing_Stats ClimbingStats;
	UPROPERTY(Blueprintable, BlueprintReadWrite, Category = "Climbing")
	FStamina ClimbingStamina;

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType,
	                           FActorComponentTickFunction* ThisTickFunction) override;
};
