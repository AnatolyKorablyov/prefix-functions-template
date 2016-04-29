#ifndef STDAFX_H
<<<<<<< HEAD
#define STDAFX_H

#include <SDKDDKVer.h>

#include <stdio.h>
#include <tchar.h>

#include <vector>
=======
#define STDAFX_H

#include <SDKDDKVer.h>

#include <stdio.h>
#include <tchar.h>

#include <vector>
>>>>>>> 5e94062b2b71f74a27fbff9b1a3c5fedcbb6037d
#include <string>

#if defined(_MSC_VER)
#pragma warning (disable: 4512)
#endif // _MSC_VER

#define BOOST_TEST_NO_MAIN
#define BOOST_TEST_INCLUDED

#if defined(_MSC_VER)
#pragma warning (disable: 4702)
#pragma warning (disable: 4535)
#endif // _MSC_VER
#include <boost/test/unit_test.hpp>
<<<<<<< HEAD
#include <boost/algorithm/string/replace.hpp>
=======
#include <boost/algorithm/string/replace.hpp>
>>>>>>> 5e94062b2b71f74a27fbff9b1a3c5fedcbb6037d

#endif // STDAFX_H
