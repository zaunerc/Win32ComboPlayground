#pragma once

#include "resource.h"
#include "CommCtrl.h"
#include "Windows.h"
#include "stdio.h"

#ifndef HINST_THISCOMPONENT
EXTERN_C IMAGE_DOS_HEADER __ImageBase;
#define HINST_THISCOMPONENT ((HINSTANCE)&__ImageBase)
#endif