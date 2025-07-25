// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "GenericData/S_DmgInput.h"
#include "SR_PlayerMaster.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMove, 		FVector2D,	Direction);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnJump, 		bool,		bPressed);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMouseLook, 	FVector2D,	LookVector);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnInteract, 	bool,		bPressed);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnLeftHandUse, bool,		bPressed);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnRightHandUse,bool,		bPressed);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnTakeDamage, FS_DmgInput,	DmgInput, AActor*, DmgSource);

UCLASS()
class STOCKROOMS_API ASR_PlayerMaster : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ASR_PlayerMaster();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;


protected:
	// Delegates
	UFUNCTION(BlueprintCallable)
	void CallEvent_Move			(FVector2D Vector2Input);
	UFUNCTION(BlueprintCallable)
	void CallEvent_Jump			(bool Input);
	UFUNCTION(BlueprintCallable)
	void CallEvent_MouseLook	(FVector2D Vector2Input);
	UFUNCTION(BlueprintCallable)
	void CallEvent_Interact		(bool TryingToInteract);
	UFUNCTION(BlueprintCallable)
	void CallEvent_LeftHandUse	(bool TryingToUse);
	UFUNCTION(BlueprintCallable)
	void CallEvent_RightHandUse	(bool TryingToUse);
	UFUNCTION(BlueprintCallable)
	void CallEvent_TakeDamage	(FS_DmgInput DmgInput, AActor* DamageSource);

	//Overrideable for each Instance of player, IE the actual Logic.
	UFUNCTION(BlueprintCallable, blueprintNativeEvent, Category = "Input|Overrideable")
	void OnMove_Event			(FVector2D Vector2Input);
	UFUNCTION(BlueprintCallable, blueprintNativeEvent, Category = "Input|Overrideable")
	void OnJump_Event			(bool Input);
	UFUNCTION(BlueprintCallable, blueprintNativeEvent, Category = "Input|Overrideable")
	void OnMouseLook_Event		(FVector2D Vector2Input);
	UFUNCTION(BlueprintCallable, blueprintNativeEvent, Category = "Input|Overrideable")
	void OnInteract_Event		(bool TryingToInteract);
	UFUNCTION(BlueprintCallable, blueprintNativeEvent, Category = "Input|Overrideable")
	void OnLeftHandUse_Event	(bool tryingToUse);
	UFUNCTION(BlueprintCallable, blueprintNativeEvent, Category = "Input|Overrideable")
	void OnRightHandUse_Event	(bool TryingToUse);
	UFUNCTION(BlueprintCallable, blueprintNativeEvent, Category = "Input|Overrideable")
	void OnTakeDamage_Event	(FS_DmgInput DmgInput, AActor* DamageSource);
	
public:
	//Event variables.

	//Input
	UPROPERTY(BlueprintAssignable, Category="InputEvents")
	FOnMove			OnMove;
	UPROPERTY(BlueprintAssignable, Category="InputEvents")
	FOnJump			OnJump;
	UPROPERTY(BlueprintAssignable, Category="InputEvents")
	FOnMouseLook	OnMouseLook;
	UPROPERTY(BlueprintAssignable, Category="InputEvents")
	FOnInteract		OnInteract;
	UPROPERTY(BlueprintAssignable, Category="InputEvents")
	FOnLeftHandUse	OnLeftHandUse;
	UPROPERTY(BlueprintAssignable, Category="InputEvents")
	FOnRightHandUse	OnRightHandUse;

	//Damage
	UPROPERTY(BlueprintAssignable, Category="Damage")
	FOnTakeDamage OnTakeDmg;
};
