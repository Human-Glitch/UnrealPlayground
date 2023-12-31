#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetSystemLibrary.h"
#include "CPP_Pickup.h"
#include "CPP_InteractionActor.h"
#include "CPP_Character.generated.h"

UCLASS()
class TUTORIAL_ISLAND_API ACPP_Character : public ACharacter
{
    GENERATED_BODY()

public:
    // Sets default values for this character's properties
    ACPP_Character();

protected:
    // Called when the game starts or when spawned
    virtual void BeginPlay() override;

public: 
    // Called every frame
    virtual void Tick(float DeltaTime) override;

    // Called to bind functionality to input
    virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
    UFUNCTION(BlueprintCallable)
        void RemovePickup();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
        void TestBPFunc(int x);

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
        TArray<int> OurIntArray;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
        TMap<FString, float> OurMap;

    UPROPERTY(Editanywhere, BlueprintReadWrite)
        TSubclassOf<ACPP_InteractionActor> ActorToSpawn;
};
