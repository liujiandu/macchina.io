//
// Credentials.cpp
//
// $Id: //poco/1.7/RemotingNG/src/Credentials.cpp#4 $
//
// Library: RemotingNG
// Package: Transport
// Module:  Credentials
//
// Copyright (c) 2017, Applied Informatics Software Engineering GmbH.
// All rights reserved.
//
// SPDX-License-Identifier: Apache-2.0
//


#include "Poco/RemotingNG/Credentials.h"


namespace Poco {
namespace RemotingNG {


const std::string Credentials::ATTR_USERNAME("n");
const std::string Credentials::ATTR_PASSWORD("p");
const std::string Credentials::ATTR_MECHANISM("#m");
const std::string Credentials::ATTR_TOKEN("t");
const std::string Credentials::ATTR_NONCE("r");
const std::string Credentials::ATTR_SALT("s");
const std::string Credentials::ATTR_ITERATIONS("i");
const std::string Credentials::ATTR_SIGNATURE("v");


Credentials::Credentials()
{
}


Credentials::Credentials(const Credentials& other):
	AttributedObject(other)
{
}

	
Credentials& Credentials::operator = (const Credentials& other)
{
	AttributedObject::operator = (other);
	return *this;
}

	
Credentials::~Credentials()
{
}


} } // namespace Poco::RemotingNG