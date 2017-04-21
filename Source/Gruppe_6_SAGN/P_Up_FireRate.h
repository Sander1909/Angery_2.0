// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Actor.h"
#include "P_Up_FireRate.generated.h"

UCLASS()
class GRUPPE_6_SAGN_API AP_Up_FireRate : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AP_Up_FireRate();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	// Called every frame
	virtual void Tick( float DeltaSeconds ) override;

	
	
};