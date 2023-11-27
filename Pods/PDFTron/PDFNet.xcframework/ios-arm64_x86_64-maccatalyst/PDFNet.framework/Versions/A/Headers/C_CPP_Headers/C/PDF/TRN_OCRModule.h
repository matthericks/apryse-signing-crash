//---------------------------------------------------------------------------------------
// Copyright (c) 2001-2023 by Apryse Software Inc. All Rights Reserved.
// Consult legal.txt regarding legal and license information.
//---------------------------------------------------------------------------------------
// !Warning! This file is autogenerated, modify the .codegen file, not this one
// (any changes here will be wiped out during the autogen process)

#ifndef PDFTRON_H_COCRModule
#define PDFTRON_H_COCRModule

#ifdef __cplusplus
extern "C" {
#endif

#include <C/Common/TRN_Types.h>
#include <C/Common/TRN_Exception.h>


struct TRN_OCRModule_tag;
typedef struct TRN_OCRModule_tag* TRN_OCRModule;


/* methods: */
TRN_API TRN_OCRModuleIsModuleAvailable(TRN_Bool* result);
TRN_API TRN_OCRModuleIsIRISModuleAvailable(TRN_Bool* result);
TRN_API TRN_OCRModuleImageToPDF(TRN_PDFDoc dst, const TRN_UString src, TRN_Obj options);
TRN_API TRN_OCRModuleProcessPDF(TRN_PDFDoc dst, TRN_Obj options);
TRN_API TRN_OCRModuleGetOCRJsonFromImage(TRN_PDFDoc dst, const TRN_UString src, TRN_Obj options, TRN_UString* result);
TRN_API TRN_OCRModuleGetOCRJsonFromPDF(TRN_PDFDoc src, TRN_Obj options, TRN_UString* result);
TRN_API TRN_OCRModuleApplyOCRJsonToPDF(TRN_PDFDoc dst, const TRN_UString json);
TRN_API TRN_OCRModuleGetOCRXmlFromImage(TRN_PDFDoc dst, const TRN_UString src, TRN_Obj options, TRN_UString* result);
TRN_API TRN_OCRModuleGetOCRXmlFromPDF(TRN_PDFDoc src, TRN_Obj options, TRN_UString* result);
TRN_API TRN_OCRModuleApplyOCRXmlToPDF(TRN_PDFDoc dst, const TRN_UString xml);



#ifdef __cplusplus
} // extern C
#endif

#endif /* PDFTRON_H_COCRModule */
