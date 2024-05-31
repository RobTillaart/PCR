//
//    FILE: unit_test_001.cpp
//  AUTHOR: Rob Tillaart
//    DATE: 2024-05-30
// PURPOSE: unit tests for the PCR library
//     URL: https://github.com/RobTillaart/PCR
//          https://github.com/Arduino-CI/arduino_ci/blob/master/REFERENCE.md
//

// supported assertions
// https://github.com/Arduino-CI/arduino_ci/blob/master/cpp/unittest/Assertion.h#L33-L42
// ----------------------------
// assertEqual(expected, actual)
// assertNotEqual(expected, actual)
// assertLess(expected, actual)
// assertMore(expected, actual)
// assertLessOrEqual(expected, actual)
// assertMoreOrEqual(expected, actual)
// assertTrue(actual)
// assertFalse(actual)
// assertNull(actual)
// assertNotNull(actual)

#include <ArduinoUnitTests.h>


#include "PCR.h"


unittest_setup()
{
  fprintf(stderr, "PCR_LIB_VERSION: %s\n", (char *) PCR_LIB_VERSION);
}


unittest_teardown()
{
}


unittest(test_constants)
{
  assertEqual(PCR_STATE_IDLE     , 0);
  assertEqual(PCR_STATE_DENATURE , 1);
  assertEqual(PCR_STATE_ANNEALING, 2);
  assertEqual(PCR_STATE_EXTENSION, 3);
  assertEqual(PCR_STATE_READY    , 99);
}


unittest(test_constructor)
{
  PCR pcr(8,9);

  assertEqual(1, 1);
  //  to elaborate configuration.
}


unittest_main()


//  -- END OF FILE --

