//---------------------------------------------------------------------------------------
// Copyright (c) 2001-2023 by Apryse Software Inc. All Rights Reserved.
// Consult legal.txt regarding legal and license information.
//---------------------------------------------------------------------------------------
// !Warning! This file is autogenerated, modify the .codegen file, not this one
// (any changes here will be wiped out during the autogen process)

#ifndef PDFTRON_H_CTextRun
#define PDFTRON_H_CTextRun

#ifdef __cplusplus
extern "C" {
#endif

#include <C/Common/TRN_Types.h>
#include <C/Common/TRN_Exception.h>

TRN_API TRN_TextRunSetText(TRN_TextRun self, const TRN_UString text);
TRN_API TRN_TextRunGetText(TRN_TextRun self, TRN_UString* result);

#ifdef __cplusplus
} // extern C
#endif

#endif /* PDFTRON_H_CTextRun */
