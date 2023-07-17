// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "AbilitySystemComponent.h"
#include "WooperAttributeSet.generated.h"

#define ATTRIBUTE_ACCESSORS(ClassName, PropertyName) \
	GAMEPLAYATTRIBUTE_PROPERTY_GETTER(ClassName, PropertyName) \
	GAMEPLAYATTRIBUTE_VALUE_GETTER(PropertyName) \
	GAMEPLAYATTRIBUTE_VALUE_SETTER(PropertyName) \
	GAMEPLAYATTRIBUTE_VALUE_INITTER(PropertyName)

/**
 * 
 */
UCLASS()
class WOOPER_API UWooperAttributeSet : public UAttributeSet
{
	GENERATED_BODY()

public:
	UWooperAttributeSet();

	UPROPERTY(BlueprintReadOnly, Category = "Attribute")
	FGameplayAttributeData Health;
	ATTRIBUTE_ACCESSORS(UWooperAttributeSet, Health);

	UPROPERTY(BlueprintReadOnly, Category = "Attribute")
	FGameplayAttributeData Armor;
	ATTRIBUTE_ACCESSORS(UWooperAttributeSet, Health);

	
};
