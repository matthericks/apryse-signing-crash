// This file is autogenerated: please see the codegen template "Options"
namespace pdftron{ namespace PDF{ 

inline MergeXFDFOptions::MergeXFDFOptions()
	: m_obj_set()
	, m_dict()
{
	m_dict = m_obj_set.CreateDict();
}

inline MergeXFDFOptions::~MergeXFDFOptions()
{
}


inline bool MergeXFDFOptions::GetForce()
{
	SDF::Obj found = m_dict.FindObj("Force");
	if(found.IsValid())
	{
		return (found.GetBool());
	}
	return (false);
}

inline MergeXFDFOptions& MergeXFDFOptions::SetForce(bool value)
{
	PDF::OptionsBase::PutBool(m_dict, "Force", (value));
	return *this;
}



inline const SDF::Obj& MergeXFDFOptions::GetInternalObj() const
{
	return m_dict;
}

inline SDF::Obj& MergeXFDFOptions::GetInternalObj()
{
	return m_dict;
}

}
}