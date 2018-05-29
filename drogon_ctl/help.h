//
// Copyright 2018, An Tao.  All rights reserved.
//
// Use of this source code is governed by a MIT license
// that can be found in the License file.

#pragma once

#include <drogon/DrObject.h>
#include "CommandHandler.h"
using namespace drogon;
namespace drogon_ctl
{
    class help:public DrObject<help>,public CommandHandler
    {
    public:
        virtual void handleCommand(std::vector<std::string> &parameters) override;
        std::string script(){return "display this message";}
    };
}
