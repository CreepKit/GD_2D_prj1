// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/BoxComponent.h"
#include "PaperSpriteComponent.h"
#include "BreakableScenery.generated.h"

//UCLASS()

UCLASS(ClassGroup = "Collision", HideCategories = (Object, LOD, Lighting, TextureStreaming),
	EditInlineNew, Meta = (DisplayName = "Box Collision", BlueprintSpawnableComponent), MinimalAPI)
	class UBoxComponent : public UShapeComponent;

class GD_2D_PRJ1_API ABreakableScenery : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABreakableScenery();

	//Collider

protected:
	// the objects sprite
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Visuals")
	UPaperSpriteComponent* Sprite;

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
