
#ifndef BOOST_MPL_AUX_CONFIG_CTPS_HPP_INCLUDED
#define BOOST_MPL_AUX_CONFIG_CTPS_HPP_INCLUDED

// Copyright Aleksey Gurtovoy 2000-2004
//
// Distributed under the Boost Software License, Version 1.0. 
// (See accompanying file LICENSE_1_0.txt or copy at 
// http://www.boost.org/LICENSE_1_0.txt)
//
// See http://www.boost.org/libs/mpl for documentation.

// $Source$
// $Date: 2007-11-25 10:07:19 -0800 (Sun, 25 Nov 2007) $
// $Revision: 41369 $

#include <boost/mpl/aux_/config/workaround.hpp>
#include <boost/config.hpp>

#if    !defined(BOOST_MPL_CFG_NO_NONTYPE_TEMPLATE_PARTIAL_SPEC) \
    && !defined(BOOST_MPL_PREPROCESSING_MODE) \
    && BOOST_WORKAROUND(__BORLANDC__, < 0x582)

#   define BOOST_MPL_CFG_NO_NONTYPE_TEMPLATE_PARTIAL_SPEC

#endif

// BOOST_NO_TEMPLATE_PARTIAL_SPECIALIZATION is defined in <boost/config.hpp>

#endif // BOOST_MPL_AUX_CONFIG_CTPS_HPP_INCLUDED
