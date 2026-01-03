// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "TestBaseCharacter.generated.h"

UCLASS()
class TESTPROJECT_1_API ATestBaseCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	ATestBaseCharacter();

protected:
	virtual void BeginPlay() override;

public:	
	UPROPERTY(BlueprintReadWrite)
	float MoveSpeed = 1.f;
	
	UPROPERTY(BlueprintReadWrite)
	float MoveSpeedDefault = 1.f;
	
	virtual void Tick(float DeltaTime) override;

	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	
	
protected:
	UPROPERTY(BlueprintReadWrite)
	float Health = 10.f;
	
/**
private:
	UPROPERTY(BlueprintReadOnly)
	int32 Damage = 10;
*/	
};
