/* 
 * Copyright (C) 2006-2011 Fachhochschule Hannover
 * (University of Applied Sciences and Arts, Hannover)
 * Faculty IV, Dept. of Computer Science
 * Ricklinger Stadtweg 118, 30459 Hannover, Germany
 * 
 * Email: trust@f4-i.fh-hannover.de
 * Website: http://trust.inform.fh-hannover.de/
 * 
 * This file is part of tnc@fhh, an open source 
 * Trusted Network Connect implementation by the Trust@FHH
 * research group at the Fachhochschule Hannover.
 * 
 * tnc@fhh is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 * 
 * tnc@fhh is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with tnc@fhh; if not, see <http://www.gnu.org/licenses/>
 */
 
#ifndef DUMMYIMVLIBRARY_H_
#define DUMMYIMVLIBRARY_H_

#include <imunit/imv/IMVLibrary.h>

#define TNC_VENDORID_FHH ((TNC_VendorID) 0x0080ab)
#define TNC_SUBTYPE_FHH_DUMMY ((TNC_MessageSubtype) 0x31)
#define TNC_MESSAGETYPE_FHH_DUMMY ((TNC_VENDORID_FHH << 8) | (TNC_SUBTYPE_FHH_DUMMY & 0xff))
#define MESSAGE_TYPE_COUNT 1

/**
 * DummyIMVLibrary
 *
 */
class DummyIMVLibrary : public tncfhh::iml::IMVLibrary{
public:
	DummyIMVLibrary();
	virtual tncfhh::iml::AbstractIMV *createNewImvInstance(TNC_ConnectionID conID);
	virtual ~DummyIMVLibrary();
};

#endif /* DUMMYIMVLIBRARY_H_ */
