// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Interfaces/Damageable.h"
#include "Interfaces/Healable.h"
#include "GenericData/S_DmgInput.h"
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

	UPROPERTY(EditAnywhere,BlueprintReadWrite, Category = "Health")
        	FHealth Health;
        
        	UPROPERTY(EditAnywhere,BlueprintReadWrite, Category = "Health")
        	bool bCanbeHealed = true;
        
        	UPROPERTY(EditAnywhere,BlueprintReadWrite, Category = "Damage")
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
	virtual void OnHeal_Implementation(FS_DmgInput DmgValue, AActor* Attacker) override;
	virtual void Success_Heal_Implementation(FS_DmgInput DmgValue, AActor* Attacker) override;
	virtual void Failed_Heal_Implementation(FS_DmgInput DmgValue, AActor* Attacker) override;

	// ---- Idamage implementation ----
	virtual bool IsDamageable_Implementation();
	virtual void OnDamage_Implementation(FS_DmgInput DmgValue, AActor* Attacker) override;
	virtual void Failed_Damage_Implementation(FS_DmgInput DmgValue, AActor* Attacker) override;
	virtual void Success_Damage_Implementation(FHealth& TargetHp, FS_DmgInput DmgValue, AActor* Attacker) override;

	
};
