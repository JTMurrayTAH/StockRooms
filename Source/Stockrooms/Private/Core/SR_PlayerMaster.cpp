// Fill out your copyright notice in the Description page of Project Settings.


#include "Core/SR_PlayerMaster.h"

// Sets default values
ASR_PlayerMaster::ASR_PlayerMaster()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ASR_PlayerMaster::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASR_PlayerMaster::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ASR_PlayerMaster::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

