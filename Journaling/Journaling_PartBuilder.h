#pragma once
#include "..\AppLibrary\AppFeaturesOpsExports.h"

namespace Application
{
    class Part;
    class PartBuilder;
}


APPLIBRARY_API Application::PartBuilder* Journaling_PartBuilder_CreatePartBuilder();