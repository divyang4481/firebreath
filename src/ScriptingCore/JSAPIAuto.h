/**********************************************************\ 
Original Author: Georg Fritzsche

Created:    November 7, 2009
License:    Eclipse Public License - Version 1.0
            http://www.eclipse.org/legal/epl-v10.html

Copyright 2009 Georg Fritzsche, Firebreath development team
\**********************************************************/

#ifndef JSAPIAUTO_H
#define JSAPIAUTO_H

#include "JSAPI.h"
#include "MethodConverter.h"
#include "PropertyConverter.h"

namespace FB {
	class JSAPIAuto : public JSAPI
	{
	public:
		JSAPIAuto();
		~JSAPIAuto();

		// Invoke method
		virtual variant Invoke(std::string methodName, std::vector<variant>& args);

		// Manage methods
		virtual void registerMethod(const std::string& name, CallMethodFunctor func);
		virtual bool HasMethod(std::string methodName);
		virtual bool HasProperty(std::string propertyName);
		virtual bool HasProperty(int idx);

		// Manage properties
		virtual void registerProperty(const std::string& name, PropertyFunctors propFuncs);
		virtual variant GetProperty(std::string propertyName);
		virtual void SetProperty(std::string propertyName, const variant value);
		virtual variant GetProperty(int idx);
		virtual void SetProperty(int idx, const variant value);

	private:
		MethodFunctorMap m_methodFunctorMap;
		PropertyFunctorsMap m_propertyFunctorsMap;
	};
};

#endif // JSAPIAUTO_H