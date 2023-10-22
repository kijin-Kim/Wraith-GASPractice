// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "WraithPlayerData.generated.h"


class UWraithAbilitySet;
class AWraithCharacter;
class UWraithInputConfig;
/**
 * 
 */
UCLASS(BlueprintType, Blueprintable, Const)
class WRAITH_API UWraithPlayerData : public UPrimaryDataAsset
{
	GENERATED_BODY()

public:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Player")
	TSubclassOf<AWraithCharacter> WraithCharacterClass;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Player")
	TObjectPtr<UWraithInputConfig> WraithInputConfig;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Player")
	TObjectPtr<UWraithAbilitySet> WraithAbilitySet;
};