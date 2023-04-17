// Fill out your copyright notice in the Description page of Project Settings.


#include "PrintText.h"

// Sets default values
APrintText::APrintText()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APrintText::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APrintText::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void APrintText::OnPrint_Implementation()
{
	GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, PrintText);	
}

