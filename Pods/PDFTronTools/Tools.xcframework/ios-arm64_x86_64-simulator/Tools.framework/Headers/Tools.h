//---------------------------------------------------------------------------------------
// Copyright (c) 2001-2020 by PDFTron Systems Inc. All Rights Reserved.
// Consult legal.txt regarding legal and license information.
//---------------------------------------------------------------------------------------

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>

//! Project version number for Tools.
FOUNDATION_EXPORT double PTToolsVersionNumber;

//! Project version string for Tools.
FOUNDATION_EXPORT const unsigned char PTToolsVersionString[];

#import <Tools/ToolsConfig.h>
#import <Tools/ToolsDefines.h>
#import <Tools/AnnotsCasting.h>
#import <Tools/AnnotTypes.h>
#import <Tools/EraserCommon.h>
#import <Tools/PTAddPagesManager.h>
#import <Tools/PTAddPagesViewController.h>
#import <Tools/PTAnalyticsHandlerAdapter.h>
#import <Tools/PTAnalyticsManager.h>
#import <Tools/PTAnnot+Additions.h>
#import <Tools/PTAnnotationAppearanceView.h>
#import <Tools/PTAnnotationAppearanceViewModel.h>
#import <Tools/PTAnnotationManager.h>
#import <Tools/PTAnnotationModel.h>
#import <Tools/PTAnnotationOptions.h>
#import <Tools/PTAnnotationPasteboard.h>
#import <Tools/PTAnnotationRefreshAppearanceHandler.h>
#import <Tools/PTAnnotationRefreshCustomAppearanceHandler.h>
#import <Tools/PTAnnotationReplyInputView.h>
#import <Tools/PTAnnotationReplyInputViewController.h>
#import <Tools/PTAnnotationReplyViewController.h>
#import <Tools/PTAnnotationSortMode.h>
#import <Tools/PTAnnotationStyleManager.h>
#import <Tools/PTAnnotationStylePresetsGroup.h>
#import <Tools/PTAnnotationStylePresetsView.h>
#import <Tools/PTAnnotationToolbar.h>
#import <Tools/PTAnnotationViewController.h>
#import <Tools/PTAnnotationViewControllerConfiguration.h>
#import <Tools/PTAnnotEditTool.h>
#import <Tools/PTAnnotSelectTool.h>
#import <Tools/PTAnnotStyleToolbar.h>
#import <Tools/PTAnnotStyleViewController.h>
#import <Tools/PTAreaCreate.h>
#import <Tools/PTArrowAnnotationOptions.h>
#import <Tools/PTArrowCreate.h>
#import <Tools/PTBaseCollaborationManager.h>
#import <Tools/PTBasicXFDFCollaborationManager.h>
#import <Tools/PTBookmarkManager.h>
#import <Tools/PTBookmarkUtils.h>
#import <Tools/PTBookmarkViewController.h>
#import <Tools/PTCalloutCreate.h>
#import <Tools/PTCalloutEditTool.h>
#import <Tools/PTCanvasView.h>
#import <Tools/PTCheckBoxCreate.h>
#import <Tools/PTCheckMarkStampCreate.h>
#import <Tools/PTChoiceFormViewController.h>
#import <Tools/PTCloudCreate.h>
#import <Tools/PTCollaborationAnnotation.h>
#import <Tools/PTCollaborationDocumentController.h>
#import <Tools/PTCollaborationDocumentViewController.h>
#import <Tools/PTCollaborationManager.h>
#import <Tools/PTColorDefaults.h>
#import <Tools/PTColorPickerViewController.h>
#import <Tools/PTColorPt+UIColor.h>
#import <Tools/PTComboBoxCreate.h>
#import <Tools/PTCoordinatedDocument.h>
#import <Tools/PTCountCreate.h>
#import <Tools/PTCountPopupViewController.h>
#import <Tools/PTCreateRubberStampViewController.h>
#import <Tools/PTCreateToolBase.h>
#import <Tools/PTCrossMarkStampCreate.h>
#import <Tools/PTCustomStampOption.h>
#import <Tools/PTCustomTableViewController.h>
#import <Tools/PTDate+NSDate.h>
#import <Tools/PTDateTextCreate.h>
#import <Tools/PTDefaultAnnotationRefreshAppearanceHandler.h>
#import <Tools/PTDiffViewController.h>
#import <Tools/PTDigitalSignaturesManager.h>
#import <Tools/PTDigitalSignaturesViewController.h>
#import <Tools/PTDigitalSignatureTool.h>
#import <Tools/PTDigSigView.h>
#import <Tools/PTDigSigViewController.h>
#import <Tools/PTDocumentBaseViewController+ViewStatePersistence.h>
#import <Tools/PTDocumentBaseViewController.h>
#import <Tools/PTDocumentController.h>
#import <Tools/PTDocumentConversionService.h>
#import <Tools/PTDocumentNavigationItem.h>
#import <Tools/PTDocumentOptions.h>
#import <Tools/PTDocumentSlider.h>
#import <Tools/PTDocumentSliderViewController.h>
#import <Tools/PTDocumentTabBar.h>
#import <Tools/PTDocumentTabItem.h>
#import <Tools/PTDocumentTabManager.h>
#import <Tools/PTDocumentTabTableViewController.h>
#import <Tools/PTDocumentViewController.h>
#import <Tools/PTDocumentViewSettings.h>
#import <Tools/PTDocumentViewSettingsController.h>
#import <Tools/PTDotStampCreate.h>
#import <Tools/PTEditToolbar.h>
#import <Tools/PTElementBuilder+Additions.h>
#import <Tools/PTElementReader+PTAdditions.h>
#import <Tools/PTEllipseCreate.h>
#import <Tools/PTEmptyTableViewIndicator.h>
#import <Tools/PTEraser.h>
#import <Tools/PTFeatureGate.h>
#import <Tools/PTFeatureGateKeys.h>
#import <Tools/PTFileAttachmentAnnotationOptions.h>
#import <Tools/PTFileAttachmentCreate.h>
#import <Tools/PTFileAttachmentHandler.h>
#import <Tools/PTFileSpec+PTAdditions.h>
#import <Tools/PTFindTextToolbar.h>
#import <Tools/PTFloatingSigViewController.h>
#import <Tools/PTFormFillTool.h>
#import <Tools/PTFreeHandCreate.h>
#import <Tools/PTFreeHandHighlightCreate.h>
#import <Tools/PTFreeText+Additions.h>
#import <Tools/PTFreeTextAnnotationProperties.h>
#import <Tools/PTFreeTextAppearanceView.h>
#import <Tools/PTFreeTextAppearanceViewModel.h>
#import <Tools/PTFreeTextCreate.h>
#import <Tools/PTFreeTextInputAccessoryView.h>
#import <Tools/PTFreeTextRefreshAppearanceHandler.h>
#import <Tools/PTFreeTextView.h>
#import <Tools/PTGrabberView.h>
#import <Tools/PTHalfModalPresentationController.h>
#import <Tools/PTHalfModalPresentationManager.h>
#import <Tools/PTImageCropTool.h>
#import <Tools/PTImageStampAnnotationOptions.h>
#import <Tools/PTImageStampCreate.h>
#import <Tools/PTLegacyAnnotationViewController.h>
#import <Tools/PTLineCreate.h>
#import <Tools/PTLinkCreate.h>
#import <Tools/PTListBoxCreate.h>
#import <Tools/PTLocalization.h>
#import <Tools/PTLogger.h>
#import <Tools/PTMagnifierView.h>
#import <Tools/PTMarkupAnnotationProperties.h>
#import <Tools/PTMatrix2D+Additions.h>
#import <Tools/PTMeasurementScale.h>
#import <Tools/PTMoreItemsViewController.h>
#import <Tools/PTMultiAnnotStyleViewController.h>
#import <Tools/PTNavigationHistoryManager.h>
#import <Tools/PTNavigationHistoryView.h>
#import <Tools/PTNavigationListsViewController.h>
#import <Tools/PTNoteEditController.h>
#import <Tools/PTObj+Additions.h>
#import <Tools/PTOCRProcessor.h>
#import <Tools/PTOutlineViewController.h>
#import <Tools/PTOverrides.h>
#import <Tools/PTPage+Additions.h>
#import <Tools/PTPageCropViewController.h>
#import <Tools/PTPageIndicatorViewController.h>
#import <Tools/PTPageLabelManager.h>
#import <Tools/PTPageTemplateViewController.h>
#import <Tools/PTPanelView.h>
#import <Tools/PTPanelViewController.h>
#import <Tools/PTPanTool.h>
#import <Tools/PTPDFAnnotationBorder.h>
#import <Tools/PTPDFAnnotationBorderAppearance.h>
#import <Tools/PTPDFAnnotationChange.h>
#import <Tools/PTPDFAnnotationProperties.h>
#import <Tools/PTPDFDoc+Additions.h>
#import <Tools/PTPDFDocumentManager.h>
#import <Tools/PTPDFDocumentModel.h>
#import <Tools/PTPDFLayerViewController.h>
#import <Tools/PTPDFRect+PTAdditions.h>
#import <Tools/PTPDFTronUtil.h>
#import <Tools/PTPDFViewCtrl+Additions.h>
#import <Tools/PTPencilDrawingCreate.h>
#import <Tools/PTPerimeterCreate.h>
#import <Tools/PTPolygonCreate.h>
#import <Tools/PTPolylineCreate.h>
#import <Tools/PTPolylineEditTool.h>
#import <Tools/PTPopoverNavigationController.h>
#import <Tools/PTPopoverTableViewController.h>
#import <Tools/PTRadioButtonCreate.h>
#import <Tools/PTRectangleCreate.h>
#import <Tools/PTRectangleRedactionCreate.h>
#import <Tools/PTReflowCommon.h>
#import <Tools/PTReflowViewController.h>
#import <Tools/PTResizeWidgetView.h>
#import <Tools/PTRichMediaTool.h>
#import <Tools/PTRichTextAnnotationProperties.h>
#import <Tools/PTRichTextAppearanceViewModel.h>
#import <Tools/PTRotateWidgetView.h>
#import <Tools/PTRubberStampCreate.h>
#import <Tools/PTRubberStampManager.h>
#import <Tools/PTRubberStampViewController.h>
#import <Tools/PTRulerCreate.h>
#import <Tools/PTSavedCountGroupsViewController.h>
#import <Tools/PTSavedSignaturesViewController.h>
#import <Tools/PTSDFDoc+Additions.h>
#import <Tools/PTSelectableBarButtonItem.h>
#import <Tools/PTSelectionBar.h>
#import <Tools/PTSelectionRectContainerView.h>
#import <Tools/PTSelectionRectView.h>
#import <Tools/PTSettingsViewController.h>
#import <Tools/PTSignatureAnnotationOptions.h>
#import <Tools/PTSignatureFieldCreate.h>
#import <Tools/PTSignaturesManager.h>
#import <Tools/PTSmartPen.h>
#import <Tools/PTSpacingTextCreate.h>
#import <Tools/PTStampManager.h>
#import <Tools/PTStickyNoteCreate.h>
#import <Tools/PTTabbedDocumentViewController.h>
#import <Tools/PTTextAnnotationOptions.h>
#import <Tools/PTTextFieldCreate.h>
#import <Tools/PTTextHighlightCreate.h>
#import <Tools/PTTextMarkupAnnotationOptions.h>
#import <Tools/PTTextMarkupCreate.h>
#import <Tools/PTTextMarkupEditTool.h>
#import <Tools/PTTextRedactionCreate.h>
#import <Tools/PTTextSearchViewController.h>
#import <Tools/PTTextSelectTool.h>
#import <Tools/PTTextSquigglyCreate.h>
#import <Tools/PTTextStrikeoutCreate.h>
#import <Tools/PTTextUnderlineCreate.h>
#import <Tools/PTTextWidget+Additions.h>
#import <Tools/PTTextWidgetAnnotationProperties.h>
#import <Tools/PTTextWidgetAppearanceView.h>
#import <Tools/PTTextWidgetAppearanceViewModel.h>
#import <Tools/PTTextWidgetRefreshAppearanceHandler.h>
#import <Tools/PTThumbnailSliderView.h>
#import <Tools/PTThumbnailSliderViewController.h>
#import <Tools/PTThumbnailsViewController.h>
#import <Tools/PTThumbnailViewCell.h>
#import <Tools/PTThumbnailViewLayout.h>
#import <Tools/PTTool.h>
#import <Tools/PTToolBarButtonItem.h>
#import <Tools/PTToolGroup.h>
#import <Tools/PTToolGroupDefaultsViewController.h>
#import <Tools/PTToolGroupIndicatorView.h>
#import <Tools/PTToolGroupManager.h>
#import <Tools/PTToolGroupToolbar.h>
#import <Tools/PTToolGroupViewController.h>
#import <Tools/PTToolManager.h>
#import <Tools/PTToolsSettingsManager.h>
#import <Tools/PTToolsSettingsViewController.h>
#import <Tools/PTToolsUtil.h>
#import <Tools/PTUndoRedoInfo.h>
#import <Tools/PTUndoRedoManager.h>
#import <Tools/PTUserBookmark.h>
#import <Tools/PTWidgetAnnotationOptions.h>
#import <Tools/PTWidgetAnnotationProperties.h>
