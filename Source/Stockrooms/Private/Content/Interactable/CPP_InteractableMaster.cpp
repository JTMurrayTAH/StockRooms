// Fill out your copyright notice in the Description page of Project Settings.


#include "Content/Interactable/CPP_InteractableMaster.h"


// Sets default values
ACPP_InteractableMaster::ACPP_InteractableMaster()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void ACPP_InteractableMaster::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACPP_InteractableMaster::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

