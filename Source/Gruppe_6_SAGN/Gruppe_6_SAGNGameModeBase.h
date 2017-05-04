// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "BossEnemy.h"
#include "GameFramework/GameModeBase.h"
#include "Gruppe_6_SAGNGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class GRUPPE_6_SAGN_API AGruppe_6_SAGNGameModeBase : public AGameModeBase
{
	GENERATED_BODY()

public:

	AGruppe_6_SAGNGameModeBase();

	virtual void BeginPlay() override;

	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere, Category = "Spawning")
		TSubclassOf<class AStandardEnemy> StandardEnemy_BP;

	UPROPERTY(EditAnywhere, Category = "Spawning")
		TSubclassOf<class ASpinningMeleeEnemy> SpinningMeleeEnemy_BP;

	UPROPERTY(EditAnywhere, Category = "Spawning")
		TSubclassOf<class APacmanEnemy> PacmanEnemy_BP;

	UPROPERTY(EditAnywhere, Category = "Spawning")
		TSubclassOf<class ARandomEnemy> RandomEnemy_BP;

	UPROPERTY(EditAnywhere, Category = "Spawning")
		TSubclassOf<class AStrayEnemy> StrayEnemy_BP;

	UPROPERTY(EditAnywhere, Category = "Spawning")
		TSubclassOf<class ABossEnemy> BossEnemy_BP;

	UPROPERTY(EditAnywhere, Category = "Sound")
		USoundBase* OnNextWaveSound;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Lighting")
		ULightComponent* DynamicLighting;

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "HUD")
		void ShowVictoryHUD();

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "HUD")
		void NextWaveAnnouncement();

	class ABossEnemy * BossPtr = nullptr;

	void SpawnStandardEnemy();
	void SpawnPacmanEnemy();
	void SpawnRandomEnemy();
	void SpawnStrayEnemy();
	void SpawnSpinningMeleeEnemy();
	void SpawnBossEnemy();

	UPROPERTY()
		UWorld * World;

private:

	float SpawnValuesX[2]{ 2000.0f, -2000.0f };
	float SpawnValuesY[2]{ 3800.0f, -3800.0f };
	float PacmanSpawnValues[2]{ 1000.0f, -1000.0f };

	bool WaveIntermission = true;

	int WaveNumber = 0;
	int EnemiesSpawned = 0;
	int IsBossDeadInt = 0;

	float WaveTimer;
	float StandardSpawnTimer;
	float StraySpawnTimer;
	float PacmanSpawnTimer;
	float SpinningMeleeSpawnTimer;
	
	
};
