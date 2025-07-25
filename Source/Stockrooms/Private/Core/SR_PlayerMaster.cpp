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
#pragma region Binding
	OnMove.AddDynamic(this, &ASR_PlayerMaster::OnMove_Event);
	OnJump.AddDynamic(this, &ASR_PlayerMaster::OnJump_Event);
	OnMouseLook.AddDynamic(this, &ASR_PlayerMaster::OnMouseLook_Event);
	OnInteract.AddDynamic(this, &ASR_PlayerMaster::OnInteract_Event);
	OnLeftHandUse.AddDynamic(this, &ASR_PlayerMaster::OnLeftHandUse_Event);
	OnRightHandUse.AddDynamic(this, &ASR_PlayerMaster::OnRightHandUse_Event);
#pragma endregion
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
#pragma region Events
void ASR_PlayerMaster::CallEvent_Move(FVector2D Vector2Input)
{
	OnMove.Broadcast(Vector2Input);
}

void ASR_PlayerMaster::CallEvent_Jump(bool Input)
{
	OnJump.Broadcast(Input);
}

void ASR_PlayerMaster::CallEvent_MouseLook(FVector2D Vector2Input)
{
	OnMouseLook.Broadcast(Vector2Input);
}

void ASR_PlayerMaster::CallEvent_Interact(bool TryingToInteract)
{
	OnInteract.Broadcast(TryingToInteract);
}

void ASR_PlayerMaster::CallEvent_LeftHandUse(bool tryingToUse)
{
	OnLeftHandUse.Broadcast(tryingToUse);
}

void ASR_PlayerMaster::CallEvent_RightHandUse(bool TryingToUse)
{
	OnRightHandUse.Broadcast(TryingToUse);
}

void ASR_PlayerMaster::CallEvent_TakeDamage(float DmgInput, AActor* DamageSource)
{
	OnTakeDmg.Broadcast(DmgInput, DamageSource);
}
#pragma endregion Events

#pragma region Actions
void ASR_PlayerMaster::OnRightHandUse_Event_Implementation(bool TryingToUse)
{
}

void ASR_PlayerMaster::OnLeftHandUse_Event_Implementation(bool tryingToUse)
{
}

void ASR_PlayerMaster::OnInteract_Event_Implementation(bool TryingToInteract)
{
}

void ASR_PlayerMaster::OnMouseLook_Event_Implementation(FVector2D Vector2Input)
{
}

void ASR_PlayerMaster::OnJump_Event_Implementation(bool Input)
{
}

void ASR_PlayerMaster::OnMove_Event_Implementation(FVector2D Vector2Input)
{
}

void ASR_PlayerMaster::OnTakeDamage_Event_Implementation(float DmgInput, AActor* DamageSource)
{
}

#pragma endregion Actions
