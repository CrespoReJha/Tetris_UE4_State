// Fill out your copyright notice in the Description page of Project Settings.


#include "EstadoTarde.h"
#include "Escenario.h"

// Sets default values
AEstadoTarde::AEstadoTarde()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

    materialEscenarioManana = LoadObject<UMaterialInterface>(nullptr, TEXT("Material'/Game/Blueprints/atardecer_paisaje_Mat.atardecer_paisaje_Mat'"));

}

// Called when the game starts or when spawned
void AEstadoTarde::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEstadoTarde::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AEstadoTarde::EstablecerEscenario(class AEscenario* _Escenario)
{

    FTransform SpawnLocation;

    GEngine->AddOnScreenDebugMessage(-1, 10, FColor::Blue, TEXT("Estado tarde"));

 
    _Escenario->MeshEscenario->SetMaterial(0, materialEscenarioManana);

    
    Escenario->cambiarEstado(Escenario->getEstadoNoche());
}

void AEstadoTarde::SetEscenario(AEscenario* _Escenario)
{
	Escenario = _Escenario;
}

