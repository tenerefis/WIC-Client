#pragma once

#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#include <winsock.h>
#include <stdio.h>
#include <intrin.h>
#include <shellapi.h>
#include <sys/stat.h>

#pragma comment(lib, "ws2_32.lib")

// Shared libraries
#pragma comment(lib, "detours.lib")
#include "../../shared/detours/Detours.h"
#include "../../shared/shared_utility.h"
#include "../../shared/Ptr.h"

/***** Constants & type definitions *****/
#define VAR_STRING(a) #a

typedef unsigned char		uchar;
typedef unsigned short		ushort;
typedef unsigned int		uint;
typedef unsigned long		ulong;
typedef unsigned __int64	uint64;
typedef void				*voidptr_t;
#ifdef _M_IX86
typedef __w64 unsigned long sizeptr_t;
#else
typedef unsigned long long	sizeptr_t;
#endif

#define CHECK_OFFSET(str, member, offset)	static_assert(offsetof(str, member) == offset, #str "." #member ": Invalid struct/class member offset");
#define CHECK_SIZE(str, size)				static_assert(sizeof(str) == size, #str ": Invalid struct/class size");
/****************************************/

// wic.exe and wic_online.exe detours
#include "versions/stdafx.h"

// MCommon2
#include "mcommon2/stdafx.h"

// MRender
#include "mrender/stdafx.h"

// MNetwork
#include "mnetwork/stdafx.h"

// MMassgate
#include "mmassgate/stdafx.h"