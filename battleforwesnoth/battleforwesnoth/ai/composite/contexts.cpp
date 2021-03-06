/* $Id: contexts.cpp 52533 2012-01-07 02:35:17Z shadowmaster $ */
/*
   Copyright (C) 2009 - 2012 by Yurii Chernyi <terraninfo@terraninfo.net>
   Part of the Battle for Wesnoth Project http://www.wesnoth.org/

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2 of the License, or
   (at your option) any later version.
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY.

   See the COPYING file for more details.
*/

/**
 * Helper functions for the object which operates in the context of AI for specific side
 * This is part of AI interface
 * @file
 */

#include "contexts.hpp"

// =======================================================================
namespace ai {

ai_context_proxy::ai_context_proxy()
	: target_()
{
}


ai_context_proxy::~ai_context_proxy()
{
}


rca_context::rca_context()
{
}


rca_context::~rca_context()
{
}


rca_context_proxy::rca_context_proxy()
	: target_()
{
}


rca_context_proxy::~rca_context_proxy()
{
}

} //end of namespace ai
