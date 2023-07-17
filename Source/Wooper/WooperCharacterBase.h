// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "GameplayTagContainer.h"
#include<GameplayEffectTypes.h>
#include "AbilitySystemInterface.h"
#include "WooperCharacterBase.generated.h"

UCLASS()
class WOOPER_API AWooperCharacterBase : public ACharacter, public IAbilitySystemInterface
{
	GENERATED_BODY()

		UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Abilities, meta = (AllowPrivateAccess = "true"))
			class UAbilitySystemComponent* AbilitySystemComponent;
	UPROPERTY()
		class UWooperAttributeSet* Attributes;
	

public:
	// Sets default values for this character's properties
	AWooperCharacterBase();

	UAbilitySystemComponent* GetAbilitySystemComponent() const override;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Category = "Wooper")
		TSubclassOf<class UGameplayEffect> DefaultAttributeEffect;

	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Category = "Wooper")
		TArray<TSubclassOf<class UGameplayAbility>> DefaultAbilities;
};
