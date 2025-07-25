// Fill out your copyright notice in the Description page of Project Settings.


#include "FunctionLibaries/Helper/HsClimbing.h"

FHitResult UHsClimbing::LineTrace_Generic(UObject* WorldContextObject, FVector Forward, FVector Start, float Length, AActor* IgnoreActor)
{
	FHitResult Hit;
	FVector End = Start + (Forward.GetSafeNormal() * Length);

	UWorld* World = GEngine->GetWorldFromContextObjectChecked(WorldContextObject);
	if (!World) return Hit;

	FCollisionQueryParams QueryParams;
	if (IgnoreActor)
	{
		QueryParams.AddIgnoredActor(IgnoreActor);
	}

	World->LineTraceSingleByChannel(Hit, Start, End, ECC_Visibility, QueryParams);

	DrawDebugLine(World, Start, End, Hit.bBlockingHit ? FColor::Blue : FColor::Red, true, 5.0f, 1.0f, 2.0f);

	return Hit;
}
