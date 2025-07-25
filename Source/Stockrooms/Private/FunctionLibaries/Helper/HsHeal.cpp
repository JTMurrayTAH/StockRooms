// Fill out your copyright notice in the Description page of Project Settings.


#include "Stockrooms/Public/FunctionLibaries/Helper/HsHeal.h"


void UHsHeal::TryToHeal(TScriptInterface<IHealable> Target, FHealth& TargetHp, FS_DmgInput HealValue, AActor* Healer)
{
	if (!IHealable::Execute_IsHealable(Target.GetObject()))
	{
		IHealable::Execute_Failed_Heal(Target.GetObject(), HealValue,Healer);
		return;
	}
	else
	{
		IHealable::Execute_Success_Heal(Target.GetObject(),HealValue,Healer);
		IHealable::Execute_OnHeal(Target.GetObject(),HealValue,Healer);
	}
	
}

void UHsHeal::OnHeal(FHealth& TargetHp, FS_DmgInput HealValue)
{
}
