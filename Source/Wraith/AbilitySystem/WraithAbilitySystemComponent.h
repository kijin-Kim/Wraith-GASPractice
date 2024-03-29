// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystemComponent.h"
#include "WraithAbilitySystemComponent.generated.h"


struct FWraithGameplayEffectConfig;
struct FWraithGameplayAbilityConfig;

UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class WRAITH_API UWraithAbilitySystemComponent : public UAbilitySystemComponent
{
	GENERATED_BODY()

public:
	UWraithAbilitySystemComponent();
	virtual void AbilitySpecInputPressed(FGameplayAbilitySpec& Spec) override;
	virtual void AbilitySpecInputReleased(FGameplayAbilitySpec& Spec) override;
	void HandleAbilityInputs();
	void AbilityInputTagPressed(const FGameplayTag& InputTag);
	void AbilityInputTagReleased(const FGameplayTag& InputTag);
	FGameplayAbilitySpec* FindAbilitySpecFromDynamicTag(const FGameplayTag& Tag);

	void SetupAbilitySystem(const TArray<FWraithGameplayAbilityConfig>& GrantedAbilities,
	                        const TArray<FWraithGameplayEffectConfig>& GrantedGameplayEffects,
	                        const TArray<TSubclassOf<UAttributeSet>>& GrantedAttributeSets);

private:
	TArray<FGameplayAbilitySpecHandle> PressedSpecHandles;
	TArray<FGameplayAbilitySpecHandle> HeldSpecHandles;
	TArray<FGameplayAbilitySpecHandle> ReleasedSpecHandles;
};
