// This file is autogenerated: please see the codegen template "Options"
#ifndef PDFTRON_H_CPPPDFCADConvertOptions
#define PDFTRON_H_CPPPDFCADConvertOptions

#include <PDF/OptionsBase.h>

namespace pdftron{ namespace PDF{ 

class CADConvertOptions
{
public:
	/**
	 * Layout sorting options
	 */
	enum LayoutSortOrder
	{
		e_default_order = 0, ///< Default sort order. In this case there is no explicit sort performed, and pages are placed in the order they are encountered in the source document
		e_alphabetic_order = 1, ///< Alphabetic sort order
		e_alphanumeric_order = 2 ///< Alphanumeric sort order (also called natural sort order)
	};

	CADConvertOptions();
	~CADConvertOptions();

	
	/**
	* Gets the value AllowThinLines from the options object
	* Sets drawing line weights to zero
	* @return a bool, the current value for AllowThinLines.
	*/
	bool GetAllowThinLines();

	/**
	* Sets the value for AllowThinLines in the options object
	* Sets drawing line weights to zero
	* @param value: the new value for AllowThinLines
	* @return this object, for call chaining
	*/
	CADConvertOptions& SetAllowThinLines(bool value);

	
	/**
	* Gets the value AutoRotate from the options object
	* Maps the orientation to the sheet dimensions
	* @return a bool, the current value for AutoRotate.
	*/
	bool GetAutoRotate();

	/**
	* Sets the value for AutoRotate in the options object
	* Maps the orientation to the sheet dimensions
	* @param value: the new value for AutoRotate
	* @return this object, for call chaining
	*/
	CADConvertOptions& SetAutoRotate(bool value);

	
	/**
	* Gets the value BackgroundColor from the options object
	* Sets background color for cad conversion (display palette may be adjusted to contrast the chosen background color)
	* @return a ColorPt, the current value for BackgroundColor.
	*/
	ColorPt GetBackgroundColor();

	/**
	* Sets the value for BackgroundColor in the options object
	* Sets background color for cad conversion (display palette may be adjusted to contrast the chosen background color)
	* @param value: the new value for BackgroundColor
	* @return this object, for call chaining
	*/
	CADConvertOptions& SetBackgroundColor(ColorPt value);

	
	/**
	* Gets the value ColorMode from the options object
	* Sets the color palette used by the drawing export. Possible values are Mono (i.e., monochrome) and Gray (i.e., grayscale), otherwise drawing's original palette is used
	* @return a UString, the current value for ColorMode.
	*/
	UString GetColorMode();

	/**
	* Sets the value for ColorMode in the options object
	* Sets the color palette used by the drawing export. Possible values are Mono (i.e., monochrome) and Gray (i.e., grayscale), otherwise drawing's original palette is used
	* @param value: the new value for ColorMode
	* @return this object, for call chaining
	*/
	CADConvertOptions& SetColorMode(const UString& value);

	
	/**
	* Gets the value IncludeModel from the options object
	* Instructs the conversion process to include the model layout (default: true). Note that if the model layout is empty, it will never be included in the output
	* @return a bool, the current value for IncludeModel.
	*/
	bool GetIncludeModel();

	/**
	* Sets the value for IncludeModel in the options object
	* Instructs the conversion process to include the model layout (default: true). Note that if the model layout is empty, it will never be included in the output
	* @param value: the new value for IncludeModel
	* @return this object, for call chaining
	*/
	CADConvertOptions& SetIncludeModel(bool value);

	
	/**
	* Gets the value LayoutSortOrder from the options object
	* Specifies how the layout is sorted during cad to pdf conversion. This affects how each layout is inserted into the output pdf (each layout becomes a pdf page).
	* @return a LayoutSortOrder, the current value for LayoutSortOrder.
	*/
	LayoutSortOrder GetLayoutSortOrder();

	/**
	* Sets the value for LayoutSortOrder in the options object
	* Specifies how the layout is sorted during cad to pdf conversion. This affects how each layout is inserted into the output pdf (each layout becomes a pdf page).
	* @param value: the new value for LayoutSortOrder
	* @return this object, for call chaining
	*/
	CADConvertOptions& SetLayoutSortOrder(LayoutSortOrder value);

	
	/**
	* Gets the value MaxXrefDepth from the options object
	* Maximum resolution depth for nested xrefs. Root drawing starts at level 0, subsequent nested levels increment by 1. Nested xrefs at levels greater than specified will not be loaded.
	* @return a UInt32, the current value for MaxXrefDepth.
	*/
	UInt32 GetMaxXrefDepth();

	/**
	* Sets the value for MaxXrefDepth in the options object
	* Maximum resolution depth for nested xrefs. Root drawing starts at level 0, subsequent nested levels increment by 1. Nested xrefs at levels greater than specified will not be loaded.
	* @param value: the new value for MaxXrefDepth
	* @return this object, for call chaining
	*/
	CADConvertOptions& SetMaxXrefDepth(UInt32 value);

	
	/**
	* Gets the value PageHeight from the options object
	* The height of the output pdf, in millimeters
	* @return a double, the current value for PageHeight.
	*/
	double GetPageHeight();

	/**
	* Sets the value for PageHeight in the options object
	* The height of the output pdf, in millimeters
	* @param value: the new value for PageHeight
	* @return this object, for call chaining
	*/
	CADConvertOptions& SetPageHeight(double value);

	
	/**
	* Gets the value PageWidth from the options object
	* The width of the output pdf, in millimeters
	* @return a double, the current value for PageWidth.
	*/
	double GetPageWidth();

	/**
	* Sets the value for PageWidth in the options object
	* The width of the output pdf, in millimeters
	* @param value: the new value for PageWidth
	* @return this object, for call chaining
	*/
	CADConvertOptions& SetPageWidth(double value);

	
	/**
	* Gets the value RasterDPI from the options object
	* Rasterization dpi used when rendering 3D content. Currently only applies to .rvt conversions
	* @return a double, the current value for RasterDPI.
	*/
	double GetRasterDPI();

	/**
	* Sets the value for RasterDPI in the options object
	* Rasterization dpi used when rendering 3D content. Currently only applies to .rvt conversions
	* @param value: the new value for RasterDPI
	* @return this object, for call chaining
	*/
	CADConvertOptions& SetRasterDPI(double value);

	

	/**
	* Adds the Sheets to the Sheets array
	* The list of sheets to be converted -- only applies to .rvt conversions
	* @param value: the new Sheets to be added to Sheets
	* @return this object, for call chaining
	*/
	CADConvertOptions& AddSheets(const UString& value);

	
	/**
	* Gets the value UseScaleFromDocument from the options object
	* If enabled, sets export paper size equal to layout geometry's coordinate range in mm when ranges are less than 5080 mm. Paper size dimensions are clamped at 5080 mm, and are rescaled if coordinate ranges exceed 5080 mm. Disabled by default.
	* @return a bool, the current value for UseScaleFromDocument.
	*/
	bool GetUseScaleFromDocument();

	/**
	* Sets the value for UseScaleFromDocument in the options object
	* If enabled, sets export paper size equal to layout geometry's coordinate range in mm when ranges are less than 5080 mm. Paper size dimensions are clamped at 5080 mm, and are rescaled if coordinate ranges exceed 5080 mm. Disabled by default.
	* @param value: the new value for UseScaleFromDocument
	* @return this object, for call chaining
	*/
	CADConvertOptions& SetUseScaleFromDocument(bool value);

	
	/**
	* Gets the value ZoomToExtents from the options object
	* If enabled, the layout geometry is zoomed to the paper size, otherwise layout settings are applied. Enabled by default.
	* @return a bool, the current value for ZoomToExtents.
	*/
	bool GetZoomToExtents();

	/**
	* Sets the value for ZoomToExtents in the options object
	* If enabled, the layout geometry is zoomed to the paper size, otherwise layout settings are applied. Enabled by default.
	* @param value: the new value for ZoomToExtents
	* @return this object, for call chaining
	*/
	CADConvertOptions& SetZoomToExtents(bool value);

	
	// @cond PRIVATE_DOC
	#ifndef SWIGHIDDEN
	const SDF::Obj& GetInternalObj() const;
	SDF::Obj& GetInternalObj();

private:
	
	SDF::ObjSet m_obj_set;
	SDF::Obj m_dict;
	#endif
	// @endcond
};

}
}

#include "../Impl/CADConvertOptions.inl"
#endif // PDFTRON_H_CPPPDFCADConvertOptions
