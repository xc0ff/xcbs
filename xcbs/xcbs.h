﻿#ifndef XCBS_H
#define XCBS_H

#include <stdio.h>

#ifdef _WIN32

#include <windows.h>
#include <bluetoothapis.h>
#include <bluetoothleapis.h>
#include <devguid.h>
#include <setupapi.h>

#elif __linux__

#include <unistd.h>

#endif

#endif // XCBS_H