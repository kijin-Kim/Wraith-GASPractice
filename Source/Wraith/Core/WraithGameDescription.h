// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "WraithGameDescription.generated.h"
/**
 * 
 */
UCLASS()
class WRAITH_API UWraithGameDescription : public UDataAsset
{
	GENERATED_BODY()

public:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Game", meta = (AllowdTypes = "Map"))
	FPrimaryAssetId MapID;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Game", meta = (AllowdTypes = "WraithCharcterData"))
	FPrimaryAssetId PlayerDataID;
};
