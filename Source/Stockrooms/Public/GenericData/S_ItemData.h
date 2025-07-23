// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "S_ItemData.generated.h"

/**
 * 
 */
USTRUCT(Blueprintable, BlueprintType)
struct FS_ItemData
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UStaticMesh* ItemMesh;
};
