// Fill out your copyright notice in the Description page of Project Settings.


#include "ParrentCharacter.h"

// Sets default values
AParrentCharacter::AParrentCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AParrentCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AParrentCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AParrentCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

