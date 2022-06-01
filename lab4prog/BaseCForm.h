#pragma once
#include "IGeoFig.h"
#include "IPrintable.h"
#include "​BaseCObject.h"
#include "​IDialogInitiable.h"
#include "IPhysObject.h"

class BaseCForm : public lab::IGeoFig, public lab::BaseCObject, public lab::IPrintable, public lab::​IDialogInitiable, public lab::IPhysObject {
};
