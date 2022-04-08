#pragma once 
#include "AutomationBindingExports.h"
#include "AutomationAPI_IBuilder.h"

namespace AutomationAPI
{
    class Part;
    class PartBuilder;

    class AUTOMATIONBINDING_API PartBuilder : public IBuilder
    {
    public:
        PartBuilder();
        virtual ~PartBuilder();

        enum PartBuilderTypes
        {
            TypeDiagonalPart,
            TypeSquarePart
        };

        void GetLength();
        void GetID();

        Part* CreatePart();
    };

}