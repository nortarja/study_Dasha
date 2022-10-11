// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Runtime/Engine/Classes/Components/TimelineComponent.h"
#include "Components/SphereComponent.h"
#include "BasePlatform.generated.h"

UENUM()
enum class EPlatformBehavior : uint8
{
    OnDemand = 0, // платформа движется в заданном направлении, пока его не достигнет
    Loop // платформа при достижении конечной точки начинает двигаться в обратную сторону
};

UCLASS()
class PLATFORMSHOMETASK_API ABasePlatform : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABasePlatform();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

    UPROPERTY(EditAnywhere, BlueprintReadOnly)
    UStaticMeshComponent* PlatformMesh;

    UPROPERTY(EditInstanceOnly, BlueprintReadOnly, meta = (MakeEditWidget))
    FVector EndLocation;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Transient)
    FVector StartLocation;
	
	FTimeline PlatformTimeline;

    UPROPERTY(EditAnywhere, BlueprintReadOnly)
    UCurveFloat* TimelineCurve;

    UPROPERTY(EditAnywhere, BlueprintReadOnly)
    EPlatformBehavior PlatformBehavior = EPlatformBehavior::OnDemand;

    UFUNCTION()
    void PlatformTimelineUpdate(float Alpha); // перемещает платформу при вызове у таймлайна методов Play и Reverse

    USphereComponent* PlatformCollision;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
    
    UFUNCTION()
    void OnPlatformBeginOverlap(UPrimitiveComponent* OverlappingComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
};
