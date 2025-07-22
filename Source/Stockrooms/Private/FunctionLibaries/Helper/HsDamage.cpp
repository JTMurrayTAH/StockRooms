// Fill out your copyright notice in the Description page of Project Settings.


#include "Stockrooms/Public/FunctionLibaries/Helper/HsDamage.h"


void UHsDamage::TryDamage(TScriptInterface<IDamageable> Target,FHealth& TargetHp, float DmgValue, AActor* Attacker)
{
	//if (Target == nullptr || Attacker == nullptr) return;

	// Use Execute_IsDamageable for safe interface calls
	if (!IDamageable::Execute_IsDamageable(Target.GetObject()))
	{
		IDamageable::Execute_Failed_Damage(Target.GetObject(), DmgValue, Attacker);
             		return;
	}
	else
	{
		
		IDamageable::Execute_Success_Damage(Target.GetObject(), TargetHp, DmgValue, Attacker);
	}
	
}

void UHsDamage::OnDamage(FHealth& TargetHp, float DmgValue, AActor* Attacker)
{
	TargetHp.Current -= DmgValue;
}
