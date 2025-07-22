// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Interfaces/Damageable.h"
#include "Interfaces/Healable.h"
#include "CPP_AC_Health.generated.h"


UCLASS(Blueprintable,ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class STOCKROOMS_API UCPP_AC_Health : public UActorComponent, public IDamageable, public IHealable
{
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
	UCPP_AC_Health();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	UPROPERTY(BlueprintReadWrite, Category = "Health")
	FHealth Health;

	UPROPERTY(BlueprintReadWrite, Category = "Health")
	bool bCanbeHealed = true;

	UPROPERTY(BlueprintReadWrite, Category = "Damage")
	bool bCanBeDamaged = true;

	

public:
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType,
	                           FActorComponentTickFunction* ThisTickFunction) override;


	// Getter
	UFUNCTION(BlueprintPure, Category = "Health")
	FHealth GetHealth() const { return Health; }
	
	// ---- IHealable implementation ----
	virtual bool IsHealable_Implementation() override;
	virtual void OnHeal_Implementation(float DmgValue, AActor* Attacker) override;
	virtual void Success_Heal_Implementation(float DmgValue, AActor* Attacker) override;
	virtual void Failed_Heal_Implementation(float DmgValue, AActor* Attacker) override;

	// ---- Idamage implementation ----
	virtual bool IsDamageable_Implementation();
	virtual void OnDamage_Implementation(float DmgValue, AActor* Attacker) override;
	virtual void Failed_Damage_Implementation(float DmgValue, AActor* Attacker) override;
	virtual void Success_Damage_Implementation(FHealth& TargetHp, float DmgValue, AActor* Attacker) override;

	
};
