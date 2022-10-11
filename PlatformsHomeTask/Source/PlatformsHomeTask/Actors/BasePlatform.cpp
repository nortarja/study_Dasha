// Fill out your copyright notice in the Description page of Project Settings.

#include "BasePlatform.h"
#include "Runtime/Engine/Classes/Components/TimelineComponent.h"

// Sets default values
ABasePlatform::ABasePlatform()
{ 
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
        
    PlatformCollision = CreateDefaultSubobject<USphereComponent>(TEXT("Platform Collision"));
    PlatformCollision->SetSphereRadius(150.0f);

    PlatformCollision->SetCollisionProfileName("OverlapOnlyPawn");

    PlatformCollision->OnComponentBeginOverlap.AddDynamic(this, &ABasePlatform::OnPlatformBeginOverlap);
    PlatformCollision->SetupAttachment(RootComponent);

    PlatformMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Platform"));
    PlatformMesh->SetupAttachment(RootComponent);

//     PlatformCollision = CreateDefaultSubobject<USphereComponent>(TEXT("Platform Collision"));
//     PlatformCollision->SetSphereRadius(150.0f);
//     PlatformCollision->OnComponentBeginOverlap.AddDynamic(this, &ABasePlatform::OnPlatformBeginOverlap);
//     RootComponent = PlatformCollision;

    
//     USceneComponent* DefaultPlatformRoot = CreateDefaultSubobject<USceneComponent>(TEXT("Platform root"));     
//     RootComponent = DefaultPlatformRoot;    
//     PlatformMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Platform"));
//     PlatformMesh->SetupAttachment(DefaultPlatformRoot);
}

// Called when the game starts or when spawned
void ABasePlatform::BeginPlay()
{
    Super::BeginPlay();
    StartLocation = PlatformMesh->GetRelativeLocation();

//     if (IsValid(TimelineCurve))
//     {
//         FOnTimelineFloatStatic PlatformMovementTimelineUpdate;
//         PlatformMovementTimelineUpdate.BindUObject(this, &ABasePlatform::PlatformTimelineUpdate);
//         PlatformTimeline.AddInterpFloat(TimelineCurve, PlatformMovementTimelineUpdate);
// 
//         if (PlatformBehavior == EPlatformBehavior::OnDemand)
//         {
//             GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Red, "It works");
//             PlatformTimeline.Play();
//         }
//     }
}

void ABasePlatform::PlatformTimelineUpdate(float Alpha)
{
    const FVector PlatformTargetLocation = FMath::Lerp(StartLocation, EndLocation, Alpha);
    PlatformMesh->SetRelativeLocation(PlatformTargetLocation);
}


// Called every frame
void ABasePlatform::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
    PlatformTimeline.TickTimeline(DeltaTime);
}

void ABasePlatform::OnPlatformBeginOverlap(UPrimitiveComponent* OverlappingComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
    // ÂÎÒ ÒÓÒ ÍÅ ÐÀÁÎÒÀÅÒ, ÏÐÈ ÏÅÐÅÑÅ×ÅÍÈÈ ÊÎËËÈÇÈÈ ÍÀÄÏÈÑÈ ÍÅÒ :(
    GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Blue, "It overlapes");
}

