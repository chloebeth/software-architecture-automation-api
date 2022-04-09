#pragma once 
#include "AutomationBindingExports.h"
#include "AutomationAPI_IBuilder.h"

/** <summary>
PartBuilder API creates and manages parts associated with specific bindings.
</summary>*/

/** <remarks>
There is nothing to explain here as this API consists of scaffolding and empty returns. 
</remarks>*/

namespace AutomationAPI
{
    class Part;
    class PartBuilder;

    /*! \fn class Part
     * Class Part.
     */
    class AUTOMATIONBINDING_API PartBuilder : public IBuilder
    {
    public:
        /*! PartBuilder details. */
        PartBuilder();
        
        /*! PartBuilder destructor with details. */
        virtual ~PartBuilder();

        /*! The different types that PartBuilder can be created as. Plus, more details. */
        enum PartBuilderTypes
        {
            TypeDiagonalPart,
            TypeSquarePart
        };

        /*! Returns the length of the PartBuilder. */
        void GetLength();
        
        /*! Returns the ID of PartBuilder. */
        void GetID();

        /*! Creates a new part and returns it to be used elsewhere. Plus, more details. */
        Part* CreatePart();
    };

}
