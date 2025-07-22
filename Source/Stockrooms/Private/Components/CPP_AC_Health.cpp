// Fill out your copyright notice in the Description page of Project Settings.


#include "Components/CPP_AC_Health.h"

#include "FunctionLibaries/Helper/HsDamage.h"


// Sets default values for this component's properties
UCPP_AC_Health::UCPP_AC_Health()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UCPP_AC_Health::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UCPP_AC_Health::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}
// Healing Interfaces
bool UCPP_AC_Health::IsHealable_Implementation()
{
	return bCanbeHealed;
}

void UCPP_AC_Health::OnHeal_Implementation(float DmgValue, AActor* Attacker)
{
	IHealable::OnHeal_Implementation(DmgValue, Attacker);
}

void UCPP_AC_Health::Success_Heal_Implementation(float DmgValue, AActor* Attacker)
{
	
}

void UCPP_AC_Health::Failed_Heal_Implementation(float DmgValue, AActor* Attacker)
{
	IHealable::Failed_Heal_Implementation(DmgValue, Attacker);
}


// Damage Interfaces
bool UCPP_AC_Health::IsDamageable_Implementation()
{
	return bCanBeDamaged;
}

void UCPP_AC_Health::OnDamage_Implementation(float DmgValue, AActor* Attacker)
{
	IDamageable::OnDamage_Implementation(DmgValue, Attacker);
}

void UCPP_AC_Health::Failed_Damage_Implementation(float DmgValue, AActor* Attacker)
{
	UE_LOG(LogTemp, Warning, TEXT("Failed"));
	
}

void UCPP_AC_Health::Success_Damage_Implementation(FHealth& TargetHp, float DmgValue, AActor* Attacker)
{
	UE_LOG(LogTemp, Warning, TEXT("Calling Damage"));
	UHsDamage::OnDamage(TargetHp, DmgValue, Attacker);
}


