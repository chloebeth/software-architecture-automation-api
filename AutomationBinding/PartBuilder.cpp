#include "AutomationAPI_FeatureCollection.h"
#include "AutomationAPI_Part.h"
#include "AutomationAPI_PartBuilder.h"
#include <iostream>
#include "..\AppLibrary\Journaling_FeatureCollection.h"
#include "..\AppPartOps\PartOps.h"
#include "..\Journaling\Journaling_PartBuilder.h"

AutomationAPI::PartBuilder::PartBuilder()
{

}

AutomationAPI::PartBuilder::~PartBuilder()
{

}

AutomationAPI::Part* AutomationAPI::PartBuilder::CreatePart()
{

	Application::PartBuilder* partBuilder =
		Journaling_PartBuilder_CreatePartBuilder();

	return nullptr;
}


void AutomationAPI::PartBuilder::GetLength()
{

}

void AutomationAPI::PartBuilder::GetID()
{

}