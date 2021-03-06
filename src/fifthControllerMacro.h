//
//  fifthControllerMacro.h
//  mspAVUgen
//
//  Created by matt on 13/03/2014.
//
//

#ifndef __Primitives__fifthControllerMacro__
#define __Primitives__fifthControllerMacro__

#include "controllerMacro.h"

namespace msp {
    class avUgen; // forward declaration
    class fifthControllerMacro : public controllerMacro {
    public:
        double applyRelative(avUgen& _avUgen, int _value);
        double applyAbsolute(avUgen& _avUgen, int _value);
    };
}
#endif