// This file is autogenerated: please see the codegen template "Options"
#ifndef PDFTRON_H_CPPPDFPDFAOptions
#define PDFTRON_H_CPPPDFPDFAOptions

#include <PDF/OptionsBase.h>
#include <PDF/PDFA/PDFACompliance.h>

namespace pdftron{ namespace PDF{ namespace PDFA{ 

class PDFAOptions : public OptionsBase
{
public:
	/**
	* Constructor.
	* @param level The PDF/A conformance level.
	*/
	PDFAOptions(PDF::PDFA::PDFACompliance::Conformance level);
	~PDFAOptions();

	
	/**
	* Gets the value Conformance from the options object
	* The PDF/A conformance level.
	* @return a PDFACompliance::Conformance, the current value for Conformance.
	*/
	PDF::PDFA::PDFACompliance::Conformance GetConformance();

	/**
	* Sets the value for Conformance in the options object
	* The PDF/A conformance level.
	* @param value: the new value for Conformance
	* @return this object, for call chaining
	*/
	PDFAOptions& SetConformance(PDF::PDFA::PDFACompliance::Conformance value);

	
	/**
	* Gets the value DPI from the options object
	* DPI used for flattening.
	* @return a UInt32, the current value for DPI.
	*/
	UInt32 GetDPI();

	/**
	* Sets the value for DPI in the options object
	* DPI used for flattening.
	* @param value: the new value for DPI
	* @return this object, for call chaining
	*/
	PDFAOptions& SetDPI(UInt32 value);

	
	/**
	* Gets the value FirstStop from the options object
	* Whether to stop processing after the first PDF/A error is detected.
	* @return a bool, the current value for FirstStop.
	*/
	bool GetFirstStop();

	/**
	* Sets the value for FirstStop in the options object
	* Whether to stop processing after the first PDF/A error is detected.
	* @param value: the new value for FirstStop
	* @return this object, for call chaining
	*/
	PDFAOptions& SetFirstStop(bool value);

	
	/**
	* Gets the value FlattenTransparency from the options object
	* Whether to flatten transparency in PDF/A-1 mode.
	* @return a bool, the current value for FlattenTransparency.
	*/
	bool GetFlattenTransparency();

	/**
	* Sets the value for FlattenTransparency in the options object
	* Whether to flatten transparency in PDF/A-1 mode.
	* @param value: the new value for FlattenTransparency
	* @return this object, for call chaining
	*/
	PDFAOptions& SetFlattenTransparency(bool value);

	
	/**
	* Gets the value MaxRefObjs from the options object
	* The maximum number of object references per error condition.
	* @return a UInt32, the current value for MaxRefObjs.
	*/
	UInt32 GetMaxRefObjs();

	/**
	* Sets the value for MaxRefObjs in the options object
	* The maximum number of object references per error condition.
	* @param value: the new value for MaxRefObjs
	* @return this object, for call chaining
	*/
	PDFAOptions& SetMaxRefObjs(UInt32 value);

	
	/**
	* Gets the value Password from the options object
	* The password to be used for encrypted PDF documents.
	* @return a UString, the current value for Password.
	*/
	UString GetPassword();

	/**
	* Sets the value for Password in the options object
	* The password to be used for encrypted PDF documents.
	* @param value: the new value for Password
	* @return this object, for call chaining
	*/
	PDFAOptions& SetPassword(const UString& value);

	
};

}
}
}

#include "../Impl/PDFAOptions.inl"
#endif // PDFTRON_H_CPPPDFPDFAOptions
