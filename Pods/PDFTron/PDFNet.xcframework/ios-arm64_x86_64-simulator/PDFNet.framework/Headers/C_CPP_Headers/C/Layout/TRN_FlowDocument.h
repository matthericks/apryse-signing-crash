//---------------------------------------------------------------------------------------
// Copyright (c) 2001-2023 by Apryse Software Inc. All Rights Reserved.
// Consult legal.txt regarding legal and license information.
//---------------------------------------------------------------------------------------
// !Warning! This file is autogenerated, modify the .codegen file, not this one
// (any changes here will be wiped out during the autogen process)

#ifndef PDFTRON_H_CFlowDocument
#define PDFTRON_H_CFlowDocument



#ifdef __cplusplus
extern "C" {
#endif

#include <C/Common/TRN_Types.h>
#include <C/Common/TRN_Exception.h>

	TRN_API TRN_FlowDocumentCreate(TRN_FlowDocument* result);
	TRN_API TRN_FlowDocumentDestroy(TRN_FlowDocument self);

	TRN_API TRN_FlowDocumentSetDefaultPageSize(TRN_FlowDocument self,
		double width, double height);
	TRN_API TRN_FlowDocumentSetDefaultMargins(TRN_FlowDocument self,
		double left, double top, double right, double bottom);

	TRN_API TRN_FlowDocumentAddParagraph(TRN_FlowDocument self, TRN_Paragraph* result);
	TRN_API TRN_FlowDocumentAddParagraphWithText(TRN_FlowDocument self, const TRN_UString text, TRN_Paragraph* result);

	TRN_API TRN_FlowDocumentAddList(TRN_FlowDocument self, TRN_List* result);
	TRN_API TRN_FlowDocumentAddTable(TRN_FlowDocument self, TRN_Table* result);

	TRN_API TRN_FlowDocumentGetBody(TRN_FlowDocument self, TRN_ContentNode* result);

	TRN_API TRN_FlowDocumentPaginateToPDF(TRN_FlowDocument self, TRN_PDFDoc* result);

#ifdef __cplusplus
} // extern C
#endif

#endif /* PDFTRON_H_CFlowDocument */
